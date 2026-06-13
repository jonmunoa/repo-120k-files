// fichero 20713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20713;

Registro20713 crear_registro20713(int id) {
    Registro20713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20713(Registro20713 r) {
    return r.valor + r.id;
}
