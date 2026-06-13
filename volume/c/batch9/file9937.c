// fichero 9937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9937;

Registro9937 crear_registro9937(int id) {
    Registro9937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9937(Registro9937 r) {
    return r.valor + r.id;
}
