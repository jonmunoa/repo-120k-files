// fichero 9513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9513;

Registro9513 crear_registro9513(int id) {
    Registro9513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9513(Registro9513 r) {
    return r.valor + r.id;
}
