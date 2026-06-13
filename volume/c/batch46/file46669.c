// fichero 46669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46669;

Registro46669 crear_registro46669(int id) {
    Registro46669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46669(Registro46669 r) {
    return r.valor + r.id;
}
