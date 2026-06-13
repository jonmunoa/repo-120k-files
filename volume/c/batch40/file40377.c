// fichero 40377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40377;

Registro40377 crear_registro40377(int id) {
    Registro40377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40377(Registro40377 r) {
    return r.valor + r.id;
}
