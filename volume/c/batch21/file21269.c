// fichero 21269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21269;

Registro21269 crear_registro21269(int id) {
    Registro21269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21269(Registro21269 r) {
    return r.valor + r.id;
}
