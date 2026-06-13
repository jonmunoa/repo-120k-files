// fichero 38933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38933;

Registro38933 crear_registro38933(int id) {
    Registro38933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38933(Registro38933 r) {
    return r.valor + r.id;
}
