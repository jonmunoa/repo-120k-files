// fichero 465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro465;

Registro465 crear_registro465(int id) {
    Registro465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro465(Registro465 r) {
    return r.valor + r.id;
}
