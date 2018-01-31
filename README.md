# SDLTurtle
A SDL Turtle for Learning C (usually used in recursive exercices)

## Prototypes

#### newTurtle
```C
Turtle* newTurtle(SDLRenderer \*renderer, int posX, int posY);
```

#### move
```C
turtle->move(Turtle* turtle, float distance);
```

#### rotate
```C
turtle->rotate(Turtle* turtle, float angle);
```
> Note : angle must be given in degrees

#### free

```C
turtle->free(turtle);
```

## Example

```C
Turtle* turtle = newTurtle(renderer, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);
for(int i = 0; i < 8; i++) {
  turtle->move(turtle, 20 * i);
  turtle->rotate(turtle, 90);
}
turtle->free(turtle);
```

