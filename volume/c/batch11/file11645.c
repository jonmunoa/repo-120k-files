// fichero 11645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11645;

Registro11645 crear_registro11645(int id) {
    Registro11645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11645(Registro11645 r) {
    return r.valor + r.id;
}
