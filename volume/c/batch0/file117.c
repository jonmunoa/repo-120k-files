// fichero 117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro117;

Registro117 crear_registro117(int id) {
    Registro117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro117(Registro117 r) {
    return r.valor + r.id;
}
