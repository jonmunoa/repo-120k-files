// fichero 8117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8117;

Registro8117 crear_registro8117(int id) {
    Registro8117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8117(Registro8117 r) {
    return r.valor + r.id;
}
