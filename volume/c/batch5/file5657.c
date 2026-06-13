// fichero 5657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5657;

Registro5657 crear_registro5657(int id) {
    Registro5657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5657(Registro5657 r) {
    return r.valor + r.id;
}
