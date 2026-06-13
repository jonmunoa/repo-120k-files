// fichero 16845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16845;

Registro16845 crear_registro16845(int id) {
    Registro16845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16845(Registro16845 r) {
    return r.valor + r.id;
}
