// fichero 32781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32781;

Registro32781 crear_registro32781(int id) {
    Registro32781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32781(Registro32781 r) {
    return r.valor + r.id;
}
