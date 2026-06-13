// fichero 49669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49669;

Registro49669 crear_registro49669(int id) {
    Registro49669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49669(Registro49669 r) {
    return r.valor + r.id;
}
