// fichero 34997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34997;

Registro34997 crear_registro34997(int id) {
    Registro34997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34997(Registro34997 r) {
    return r.valor + r.id;
}
