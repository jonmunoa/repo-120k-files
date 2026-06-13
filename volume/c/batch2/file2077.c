// fichero 2077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2077;

Registro2077 crear_registro2077(int id) {
    Registro2077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2077(Registro2077 r) {
    return r.valor + r.id;
}
