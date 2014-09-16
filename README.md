Topic
-----
Acceptor/Connector pattern implemented on both a Server and a Client
 
References
----------
POSA2, p.285-322.
 
Goal
----
Obtaining experience with the Acceptor/connector pattern together with the Reactor and the WrapperFacade in a real context with a distributed system.
The PC client requests information from the server which demonstrates a two way communication over TCP/IP.
 
Platform
--------
PC + windows
 
Assignment
----------
<ol>
<li>Design and implement a PC client application using the Acceptor/Connector pattern and the Reactor pattern.</li>
<li>Design and implement a PC server application using the Acceptor/Connector pattern and the Reactor pattern.</li>

<li>
  Implement the following use case "Request Patient Information".
  <br>
  Goal: A client requests a patient information record from a Patient Information System (the PC server)
  <ol>
    <li>The client opens a socket connection to the server</li>
    <li>A user inputs a CPR number on the client PC</li>
    <li>The client sends a "GetPatientInfo(CPR number)" request to the server via TCP/IP</li>
    <li>The PC Server search for the patient info in a file and responds with the corresponding PatientInfo record (name, address etc.)</li>
    <li>The client PC displays the received record</li>
    <li>Repeat step 2-6. until exit</li>
    <li>The client PC closes the connection</li>
  </ol>
</li>

<li>Measure the time for requesting the patient info.</li>
<li>Try to open and close a connection for each patient info request. Measure the time for this request and compare it with the time measured in 3.</li>
</ol>

Product / delivery / deadline
-----------------------------
A UML class diagram showing the classes in the application and one or more sequence diagrams and the source code.
 
Evaluation
----------
UML designs from one or more groups are presented and discussed on the class.
Will be a part of the second and final hand-in which includes exercise 5.
