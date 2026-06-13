// fichero 8513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8513;

Registro8513 crear_registro8513(int id) {
    Registro8513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8513(Registro8513 r) {
    return r.valor + r.id;
}
