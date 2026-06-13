// fichero 11317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11317;

Registro11317 crear_registro11317(int id) {
    Registro11317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11317(Registro11317 r) {
    return r.valor + r.id;
}
