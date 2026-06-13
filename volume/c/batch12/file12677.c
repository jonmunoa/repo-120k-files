// fichero 12677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12677;

Registro12677 crear_registro12677(int id) {
    Registro12677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12677(Registro12677 r) {
    return r.valor + r.id;
}
