// fichero 47001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47001;

Registro47001 crear_registro47001(int id) {
    Registro47001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47001(Registro47001 r) {
    return r.valor + r.id;
}
