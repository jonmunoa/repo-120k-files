// fichero 22001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22001;

Registro22001 crear_registro22001(int id) {
    Registro22001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22001(Registro22001 r) {
    return r.valor + r.id;
}
