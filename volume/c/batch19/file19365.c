// fichero 19365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19365;

Registro19365 crear_registro19365(int id) {
    Registro19365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19365(Registro19365 r) {
    return r.valor + r.id;
}
