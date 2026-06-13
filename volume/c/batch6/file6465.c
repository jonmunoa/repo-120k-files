// fichero 6465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6465;

Registro6465 crear_registro6465(int id) {
    Registro6465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6465(Registro6465 r) {
    return r.valor + r.id;
}
