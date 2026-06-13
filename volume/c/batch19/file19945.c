// fichero 19945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19945;

Registro19945 crear_registro19945(int id) {
    Registro19945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19945(Registro19945 r) {
    return r.valor + r.id;
}
