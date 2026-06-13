// fichero 3721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3721;

Registro3721 crear_registro3721(int id) {
    Registro3721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3721(Registro3721 r) {
    return r.valor + r.id;
}
