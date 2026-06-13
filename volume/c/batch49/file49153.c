// fichero 49153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49153;

Registro49153 crear_registro49153(int id) {
    Registro49153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49153(Registro49153 r) {
    return r.valor + r.id;
}
