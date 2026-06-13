// fichero 47693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47693;

Registro47693 crear_registro47693(int id) {
    Registro47693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47693(Registro47693 r) {
    return r.valor + r.id;
}
