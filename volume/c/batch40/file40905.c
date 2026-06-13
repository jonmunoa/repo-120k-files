// fichero 40905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40905;

Registro40905 crear_registro40905(int id) {
    Registro40905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40905(Registro40905 r) {
    return r.valor + r.id;
}
