// fichero 5729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5729;

Registro5729 crear_registro5729(int id) {
    Registro5729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5729(Registro5729 r) {
    return r.valor + r.id;
}
