// fichero 40105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40105;

Registro40105 crear_registro40105(int id) {
    Registro40105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40105(Registro40105 r) {
    return r.valor + r.id;
}
