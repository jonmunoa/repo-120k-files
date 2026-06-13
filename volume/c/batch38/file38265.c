// fichero 38265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38265;

Registro38265 crear_registro38265(int id) {
    Registro38265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38265(Registro38265 r) {
    return r.valor + r.id;
}
