// fichero 47145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47145;

Registro47145 crear_registro47145(int id) {
    Registro47145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47145(Registro47145 r) {
    return r.valor + r.id;
}
