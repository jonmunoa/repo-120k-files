// fichero 37465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37465;

Registro37465 crear_registro37465(int id) {
    Registro37465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37465(Registro37465 r) {
    return r.valor + r.id;
}
