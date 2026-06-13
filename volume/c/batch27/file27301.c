// fichero 27301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27301;

Registro27301 crear_registro27301(int id) {
    Registro27301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27301(Registro27301 r) {
    return r.valor + r.id;
}
