// fichero 40749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40749;

Registro40749 crear_registro40749(int id) {
    Registro40749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40749(Registro40749 r) {
    return r.valor + r.id;
}
