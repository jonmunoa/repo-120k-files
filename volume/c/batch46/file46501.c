// fichero 46501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46501;

Registro46501 crear_registro46501(int id) {
    Registro46501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46501(Registro46501 r) {
    return r.valor + r.id;
}
