// fichero 49857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49857;

Registro49857 crear_registro49857(int id) {
    Registro49857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49857(Registro49857 r) {
    return r.valor + r.id;
}
