// fichero 14781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14781;

Registro14781 crear_registro14781(int id) {
    Registro14781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14781(Registro14781 r) {
    return r.valor + r.id;
}
