// fichero 26369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26369;

Registro26369 crear_registro26369(int id) {
    Registro26369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26369(Registro26369 r) {
    return r.valor + r.id;
}
