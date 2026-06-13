// fichero 32993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32993;

Registro32993 crear_registro32993(int id) {
    Registro32993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32993(Registro32993 r) {
    return r.valor + r.id;
}
