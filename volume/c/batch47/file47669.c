// fichero 47669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47669;

Registro47669 crear_registro47669(int id) {
    Registro47669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47669(Registro47669 r) {
    return r.valor + r.id;
}
