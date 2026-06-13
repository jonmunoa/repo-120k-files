// fichero 48117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48117;

Registro48117 crear_registro48117(int id) {
    Registro48117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48117(Registro48117 r) {
    return r.valor + r.id;
}
