// fichero 6209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6209;

Registro6209 crear_registro6209(int id) {
    Registro6209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6209(Registro6209 r) {
    return r.valor + r.id;
}
