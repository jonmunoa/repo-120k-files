// fichero 46693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46693;

Registro46693 crear_registro46693(int id) {
    Registro46693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46693(Registro46693 r) {
    return r.valor + r.id;
}
