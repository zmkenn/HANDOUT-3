#include <iostream>
#include <string>

using namespace std;

int main() {
    string term;
    
    while (true) {
        cout << "Enter a term(or type 'exit' to quit'): ";
        getline(cin, term);
        
        if (term == "exit") {
            cout << "Goodbye!";
            break;
        }
        
        if (term == "ALGORITHM") {
            cout << "A step-by-step procedure for solving a problem.";
        } else if (term == "BIOS") {
            cout << "A program used by a computer's microprocessor to start the system after power-on.";
        } else if (term == "BYTE") {
            cout << "A data unit consisting of eight bits.";
        } else if (term == "CACHE") {
            cout << "A fast storage area for frequently accessed data.";
        } else if (term == "CLOCK SPEED") {
            cout << "The rate at which a CPU executes instructions, measured in cycles per second.";
        } else if (term == "CAPACITOR") {
            cout << "A component that stores and releases electrical energy.";
        } else if (term == "COMPILER") {
            cout << "A tool that converts high-level programming code into machine code.";
        } else if (term == "DATABASE") {
            cout << "An organized collection of data stored electronically.";
        } else if (term == "DEBUGGING") {
            cout << "The process of identifying and resolving errors in software or hardware.";
        } else if (term == "DIODE") {
            cout << "A component that allows current to flow in only one direction.";
        } else if (term == "DIGITAL LOGIC") {
            cout << "The foundation of digital circuits, based on logic gates.";
        } else if (term == "ETHERNET") {
            cout << "A wired communication technology for networking devices.";
        } else if (term == "FAN") {
            cout << "A cooling device that prevents overheating in computers.";
        } else if (term == "FIRMWARE") {
            cout << "Software embedded in hardware to control its functions.";
        } else if (term == "HEATSINK") {
            cout << "A device that dissipates heat from computer components.";
        } else if (term == "KERNEL") {
            cout << "The core of an operating system, managing hardware and processes.";
        } else if (term == "LATENCY") {
            cout << "The delay between an input and its response in a system.";
        } else if (term == "LOGIC GATE") {
            cout << "A basic building block of digital circuits, used for logical operations.";
        } else if (term == "MACHINE LEARNING") {
            cout << "A field of AI that enables systems to learn from data.";
        } else if (term == "MOTHERBOARD") {
            cout << "The main circuit board that connects all computer components.";
        } else if (term == "MULTITHREADING") {
            cout << "A technique that allows a program to run multiple tasks concurrently.";
        } else if (term == "NETWORK PROTOCOL") {
            cout << "Rules that define data transmission over a network.";
        } else if (term == "OVERCLOCKING") {
            cout << "Increasing a CPU’s speed beyond factory settings for better performance.";
        } else if (term == "PARALLEL COMPUTING") {
            cout << "A computing method where multiple processors work on tasks simultaneously.";
        } else if (term == "PIPELINING") {
            cout << "A technique where multiple instructions are processed in stages for efficiency.";
        } else if (term == "SATA") {
            cout << "An interface for connecting storage devices like SSDs and HDDs.";
        } else if (term == "SEMAPHORE") {
            cout << "A programming tool for managing concurrent processes safely.";
        } else if (term == "THREAD") {
            cout << "A sequence of instructions that a CPU executes independently.";
        } else if (term == "TRANSCEIVER") {
            cout << "A device that can both send and receive data signals.";
        } else if (term == "VIRTUALIZATION") {
            cout << "A technology that allows multiple virtual systems to run on a single physical machine.";
        } else {
            cout << "Not found. Try another word.";
        }
        cout << endl;
    }
    
    return 0;
}
