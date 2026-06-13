// fichero 77 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro77;

Registro77 crear_registro77(int id) {
    Registro77 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro77(Registro77 r) {
    return r.valor + r.id;
}
