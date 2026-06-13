// fichero 7041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7041;

Registro7041 crear_registro7041(int id) {
    Registro7041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7041(Registro7041 r) {
    return r.valor + r.id;
}
