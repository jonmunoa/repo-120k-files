// fichero 34697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34697;

Registro34697 crear_registro34697(int id) {
    Registro34697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34697(Registro34697 r) {
    return r.valor + r.id;
}
