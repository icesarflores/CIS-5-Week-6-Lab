# Lab 6 · Even and odd

**Week 06 · Loops**  
**Theme:** Controlled repetition  
**Type:** Lesson week


## Demo video (required)

Paste a link to a short video of you running this assignment (tool + code + run).
Work without a working video link is incomplete.

For your video, you must explain your logic for these two loops. Failure to do so will result in an incomplete assignment, which is a 0.

**Your demo:** https://youtu.be/TzIgB_ceMPg


## What to build

You will create two loops.

- For loop
- While loop
- The for loop will sum the even numbers in the range 0–100.
- The while loop will sum the odd numbers from 1 to 99.
- Hint: we talked about the updater as `--i` and `i--`, but you can also write it as:
  - `i = i - 1`
  - `i = i + 1`
  - `i = i * 2`
  - `i = i - 2`
- There are an unlimited number of choices you can use for the updater, and it's going to be up to you to figure that out.
- You will be given a blank canvas with only the main function, and it's going to be up to you to determine how to tackle this lab.

Print both sums so a run shows the work.

## Starter

Use `main.cpp`. Put your name in the file-top comment. The starter is only `main`. You decide the variables.

## Environment

VS 2022 · **GitHub Codespaces** · Replit · library machines

## Scope fence

No goto. No arrays. No functions other than main. If a loop never ends, stop the run and look at the update.

## Definition of done

- Compiles with zero errors
- A `for` loop sums the evens, then a `while` loop sums the odds
- The video explains the logic of both loops
- Repo + short demo + Canvas

## Rubric (100)

| Criterion | Pts |
|-----------|----:|
| Runs correctly on a supported path | 40 |
| Meets prompt requirements | 30 |
| Clear outcome messages | 15 |
| GitHub + short demo video | 15 |

## Getting started

1. Fork this repo on GitHub.
2. Clone your fork.
3. Compile and run:

```bash
g++ -std=c++17 -o program main.cpp && ./program
```

On Windows (Visual Studio), open `main.cpp` and use **Local Windows Debugger**.
4. Record a short demo that shows your tool, your code, and a real run. Explain the logic for both loops.
5. Paste the video link in the **Demo video** section above.
6. Submit your fork URL on Canvas.
