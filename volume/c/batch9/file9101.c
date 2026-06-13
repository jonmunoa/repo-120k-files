// fichero 9101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9101;

Registro9101 crear_registro9101(int id) {
    Registro9101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9101(Registro9101 r) {
    return r.valor + r.id;
}
