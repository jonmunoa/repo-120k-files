// fichero 30317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30317;

Registro30317 crear_registro30317(int id) {
    Registro30317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30317(Registro30317 r) {
    return r.valor + r.id;
}
