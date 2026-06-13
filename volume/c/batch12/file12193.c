// fichero 12193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12193;

Registro12193 crear_registro12193(int id) {
    Registro12193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12193(Registro12193 r) {
    return r.valor + r.id;
}
