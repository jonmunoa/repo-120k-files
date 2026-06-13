// fichero 24321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24321;

Registro24321 crear_registro24321(int id) {
    Registro24321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24321(Registro24321 r) {
    return r.valor + r.id;
}
