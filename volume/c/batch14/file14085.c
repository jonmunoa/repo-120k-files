// fichero 14085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14085;

Registro14085 crear_registro14085(int id) {
    Registro14085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14085(Registro14085 r) {
    return r.valor + r.id;
}
