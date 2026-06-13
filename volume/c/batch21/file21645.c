// fichero 21645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21645;

Registro21645 crear_registro21645(int id) {
    Registro21645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21645(Registro21645 r) {
    return r.valor + r.id;
}
