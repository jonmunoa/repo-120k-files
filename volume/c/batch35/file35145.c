// fichero 35145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35145;

Registro35145 crear_registro35145(int id) {
    Registro35145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35145(Registro35145 r) {
    return r.valor + r.id;
}
