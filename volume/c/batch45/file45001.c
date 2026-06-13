// fichero 45001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45001;

Registro45001 crear_registro45001(int id) {
    Registro45001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45001(Registro45001 r) {
    return r.valor + r.id;
}
