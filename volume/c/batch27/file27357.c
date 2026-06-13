// fichero 27357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27357;

Registro27357 crear_registro27357(int id) {
    Registro27357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27357(Registro27357 r) {
    return r.valor + r.id;
}
