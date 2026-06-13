// fichero 11821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11821;

Registro11821 crear_registro11821(int id) {
    Registro11821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11821(Registro11821 r) {
    return r.valor + r.id;
}
