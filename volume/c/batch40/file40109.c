// fichero 40109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40109;

Registro40109 crear_registro40109(int id) {
    Registro40109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40109(Registro40109 r) {
    return r.valor + r.id;
}
