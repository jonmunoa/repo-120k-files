// fichero 40293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40293;

Registro40293 crear_registro40293(int id) {
    Registro40293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40293(Registro40293 r) {
    return r.valor + r.id;
}
