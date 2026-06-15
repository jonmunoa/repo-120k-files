// fichero 21205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21205;

Registro21205 crear_registro21205(int id) {
    Registro21205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
