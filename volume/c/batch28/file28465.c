// fichero 28465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28465;

Registro28465 crear_registro28465(int id) {
    Registro28465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28465(Registro28465 r) {
    return r.valor + r.id;
}
