// fichero 20465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20465;

Registro20465 crear_registro20465(int id) {
    Registro20465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20465(Registro20465 r) {
    return r.valor + r.id;
}
