// fichero 16837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16837;

Registro16837 crear_registro16837(int id) {
    Registro16837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16837(Registro16837 r) {
    return r.valor + r.id;
}
