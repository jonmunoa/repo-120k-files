// fichero 14489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14489;

Registro14489 crear_registro14489(int id) {
    Registro14489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14489(Registro14489 r) {
    return r.valor + r.id;
}
