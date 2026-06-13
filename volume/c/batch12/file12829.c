// fichero 12829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12829;

Registro12829 crear_registro12829(int id) {
    Registro12829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12829(Registro12829 r) {
    return r.valor + r.id;
}
