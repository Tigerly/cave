# cave
A LISP interpreter in SGX for use as a secure autograder

Cave is an in-development platform for securely distributing test cases to students. It does so by isolating the interpreter within an Intel SGX enclave. Currently only LISP is supported, though other interpreted languages may be added in the future.

The goal of Cave is to provide instructors with a way to allow students to test their code, without giving students the opportunity to "game the system" and tailor their code to specific tests. Because the tests are kept entirely within the enclave, student cannot see them directly. Instructors can control how much feedback is given to students.

Cave is currently a work-in-progress and is not yet suitable for use.
