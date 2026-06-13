// fichero 40097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40097;

Registro40097 crear_registro40097(int id) {
    Registro40097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40097(Registro40097 r) {
    return r.valor + r.id;
}
