// fichero 34693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34693;

Registro34693 crear_registro34693(int id) {
    Registro34693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34693(Registro34693 r) {
    return r.valor + r.id;
}
