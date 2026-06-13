// fichero 14693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14693;

Registro14693 crear_registro14693(int id) {
    Registro14693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14693(Registro14693 r) {
    return r.valor + r.id;
}
