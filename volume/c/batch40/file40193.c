// fichero 40193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40193;

Registro40193 crear_registro40193(int id) {
    Registro40193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40193(Registro40193 r) {
    return r.valor + r.id;
}
