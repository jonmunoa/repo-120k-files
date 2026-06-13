// fichero 21205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21205;

Registro21205 crear_registro21205(int id) {
    Registro21205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21205(Registro21205 r) {
    return r.valor + r.id;
}
