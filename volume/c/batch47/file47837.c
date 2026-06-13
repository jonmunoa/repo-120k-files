// fichero 47837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47837;

Registro47837 crear_registro47837(int id) {
    Registro47837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47837(Registro47837 r) {
    return r.valor + r.id;
}
