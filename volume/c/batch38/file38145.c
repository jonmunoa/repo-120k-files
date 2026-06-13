// fichero 38145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38145;

Registro38145 crear_registro38145(int id) {
    Registro38145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38145(Registro38145 r) {
    return r.valor + r.id;
}
