// fichero 19501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19501;

Registro19501 crear_registro19501(int id) {
    Registro19501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19501(Registro19501 r) {
    return r.valor + r.id;
}
