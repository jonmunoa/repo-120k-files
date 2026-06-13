// fichero 40837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40837;

Registro40837 crear_registro40837(int id) {
    Registro40837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40837(Registro40837 r) {
    return r.valor + r.id;
}
