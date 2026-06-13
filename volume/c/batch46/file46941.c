// fichero 46941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46941;

Registro46941 crear_registro46941(int id) {
    Registro46941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46941(Registro46941 r) {
    return r.valor + r.id;
}
