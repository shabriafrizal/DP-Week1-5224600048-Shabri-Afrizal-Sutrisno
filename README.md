# DP-Week1-5224600048-Shabri Afrizal Sutrisno

## Reflection (Mandatory)

The invariant structure in my program is the execution flow inside `RunSession`: generate input, compute score, compute reward, update money, then offer shop purchase, repeated for each round. This sequence and responsibility boundary stay stable even when concrete behaviors are changed. Another invariant is that `RunSession` depends on interfaces (`IInputGenerator`, `IScoringRule`, `IRewardRule`) rather than concrete classes. That design keeps the orchestration logic fixed while allowing behavior to vary.

The mutable parts are the strategy objects injected into `RunSession` and the runtime state. For example, I can switch between `RandomInputGenerator` and `SimpleInputGenerator`, use different scoring or reward rules, and even replace reward behavior during the game through shop purchase. Also, variables like `money`, random inputs, and purchase decisions are mutable because they change each round.

When I replaced the `InputGenerator`, `RunSession` did not change because it only calls the interface method `generateInput()`. As long as the new generator implements the same contract, `RunSession` remains unaware of internal generation details. This is polymorphism and dependency inversion in practice: behavior changes, core flow does not.

If scoring logic were placed directly inside `RunSession`, the class would become tightly coupled to one scoring approach and violate single responsibility. Any scoring change would require editing the session flow class, increasing risk of regressions and making testing harder. It would also reduce extensibility, because adding alternative scoring rules would no longer be a simple class substitution.
