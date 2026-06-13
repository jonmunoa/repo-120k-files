// fichero 48649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48649;

Registro48649 crear_registro48649(int id) {
    Registro48649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48649(Registro48649 r) {
    return r.valor + r.id;
}
