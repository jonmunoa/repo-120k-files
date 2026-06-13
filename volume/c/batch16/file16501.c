// fichero 16501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16501;

Registro16501 crear_registro16501(int id) {
    Registro16501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16501(Registro16501 r) {
    return r.valor + r.id;
}
