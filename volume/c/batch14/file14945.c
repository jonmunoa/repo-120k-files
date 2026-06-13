// fichero 14945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14945;

Registro14945 crear_registro14945(int id) {
    Registro14945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14945(Registro14945 r) {
    return r.valor + r.id;
}
