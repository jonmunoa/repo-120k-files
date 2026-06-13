// fichero 41493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41493;

Registro41493 crear_registro41493(int id) {
    Registro41493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41493(Registro41493 r) {
    return r.valor + r.id;
}
