// fichero 51085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51085;

Registro51085 crear_registro51085(int id) {
    Registro51085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51085(Registro51085 r) {
    return r.valor + r.id;
}
