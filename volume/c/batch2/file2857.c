// fichero 2857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2857;

Registro2857 crear_registro2857(int id) {
    Registro2857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2857(Registro2857 r) {
    return r.valor + r.id;
}
