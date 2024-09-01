# -Arduino-Simple-Tasks-with-Different-Schedulers


# Check out project list and summaries on my [Notion](https://right-thrush-091.notion.site/Robyn-Jung-4c3bc2947eaa4279a296059c6bc376eb?pvs=4) page!


This was a project for "Intro to Embedded Systems" course at University of Washington, Seattle.  
The purpose of the lab was to perform some simple tasks on different scheduler algorithms.  
Hardware: Elegoo Mega2560 board  
Software: Arduino  

## Required tasks:  
  Task 1: Flash an external LED for 250ms every 1 second.  
  Task 2: Play a theme song and sleep for 4 sec, then play again.  
  Task 3: 7 seg disp count up by 1 unit every 100ms.  
  Task 4: Play theme and display freq value at the same time. Pause for 4s and display countdown on 7 seg. Repeat.  
  Task 5: Count time on 4 digit 7 seg display in seconds.  
  (Task Smile: design a smiley face on 7-seg)  
  
## Scheduler algorithms:  
  1. Simple round robin (RR)  
  2. Syncronized round robin (SRRI)  
  3. Data description specifications (DDS)  


## Approach:
  Same tasks were repeated in the same and different orders on each scheduler algorithms.  
  Rather than writing repetitive code for each task, I divided files by tasks and had them called at appropriate time.  
  For simple switch between the tasks, the main has a loop that contains if statement that checks current scheduler.  
    All tasks and scheduler setups are done at the beginning of the program.  
