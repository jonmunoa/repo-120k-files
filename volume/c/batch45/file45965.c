// fichero 45965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45965;

Registro45965 crear_registro45965(int id) {
    Registro45965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45965(Registro45965 r) {
    return r.valor + r.id;
}
