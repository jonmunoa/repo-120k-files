// fichero 52677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52677;

Registro52677 crear_registro52677(int id) {
    Registro52677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52677(Registro52677 r) {
    return r.valor + r.id;
}
