// fichero 19921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19921;

Registro19921 crear_registro19921(int id) {
    Registro19921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19921(Registro19921 r) {
    return r.valor + r.id;
}
