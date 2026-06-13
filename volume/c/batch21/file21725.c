// fichero 21725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21725;

Registro21725 crear_registro21725(int id) {
    Registro21725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21725(Registro21725 r) {
    return r.valor + r.id;
}
