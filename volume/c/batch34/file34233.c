// fichero 34233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34233;

Registro34233 crear_registro34233(int id) {
    Registro34233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34233(Registro34233 r) {
    return r.valor + r.id;
}
