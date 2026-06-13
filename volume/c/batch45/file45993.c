// fichero 45993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45993;

Registro45993 crear_registro45993(int id) {
    Registro45993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45993(Registro45993 r) {
    return r.valor + r.id;
}
