// fichero 40493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40493;

Registro40493 crear_registro40493(int id) {
    Registro40493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40493(Registro40493 r) {
    return r.valor + r.id;
}
