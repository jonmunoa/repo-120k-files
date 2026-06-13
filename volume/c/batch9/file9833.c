// fichero 9833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9833;

Registro9833 crear_registro9833(int id) {
    Registro9833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9833(Registro9833 r) {
    return r.valor + r.id;
}
