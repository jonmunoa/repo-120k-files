// fichero 3465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3465;

Registro3465 crear_registro3465(int id) {
    Registro3465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3465(Registro3465 r) {
    return r.valor + r.id;
}
