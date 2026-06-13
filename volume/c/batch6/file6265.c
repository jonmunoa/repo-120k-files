// fichero 6265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6265;

Registro6265 crear_registro6265(int id) {
    Registro6265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6265(Registro6265 r) {
    return r.valor + r.id;
}
