// fichero 40541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40541;

Registro40541 crear_registro40541(int id) {
    Registro40541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40541(Registro40541 r) {
    return r.valor + r.id;
}
