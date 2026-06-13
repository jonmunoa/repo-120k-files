// fichero 693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro693;

Registro693 crear_registro693(int id) {
    Registro693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro693(Registro693 r) {
    return r.valor + r.id;
}
