// fichero 11145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11145;

Registro11145 crear_registro11145(int id) {
    Registro11145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11145(Registro11145 r) {
    return r.valor + r.id;
}
