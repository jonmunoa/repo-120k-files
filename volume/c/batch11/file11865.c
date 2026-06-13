// fichero 11865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11865;

Registro11865 crear_registro11865(int id) {
    Registro11865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11865(Registro11865 r) {
    return r.valor + r.id;
}
