// fichero 43669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43669;

Registro43669 crear_registro43669(int id) {
    Registro43669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43669(Registro43669 r) {
    return r.valor + r.id;
}
