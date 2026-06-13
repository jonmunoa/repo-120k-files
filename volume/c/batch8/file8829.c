// fichero 8829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8829;

Registro8829 crear_registro8829(int id) {
    Registro8829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8829(Registro8829 r) {
    return r.valor + r.id;
}
