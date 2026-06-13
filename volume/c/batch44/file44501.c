// fichero 44501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44501;

Registro44501 crear_registro44501(int id) {
    Registro44501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44501(Registro44501 r) {
    return r.valor + r.id;
}
