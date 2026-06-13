// fichero 51669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51669;

Registro51669 crear_registro51669(int id) {
    Registro51669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51669(Registro51669 r) {
    return r.valor + r.id;
}
