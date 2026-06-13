// fichero 14301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14301;

Registro14301 crear_registro14301(int id) {
    Registro14301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14301(Registro14301 r) {
    return r.valor + r.id;
}
