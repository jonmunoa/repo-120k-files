// fichero 40673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40673;

Registro40673 crear_registro40673(int id) {
    Registro40673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40673(Registro40673 r) {
    return r.valor + r.id;
}
