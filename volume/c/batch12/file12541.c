// fichero 12541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12541;

Registro12541 crear_registro12541(int id) {
    Registro12541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12541(Registro12541 r) {
    return r.valor + r.id;
}
