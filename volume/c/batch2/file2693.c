// fichero 2693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2693;

Registro2693 crear_registro2693(int id) {
    Registro2693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2693(Registro2693 r) {
    return r.valor + r.id;
}
