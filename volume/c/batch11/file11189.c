// fichero 11189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11189;

Registro11189 crear_registro11189(int id) {
    Registro11189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11189(Registro11189 r) {
    return r.valor + r.id;
}
