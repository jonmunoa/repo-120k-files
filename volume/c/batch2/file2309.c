// fichero 2309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2309;

Registro2309 crear_registro2309(int id) {
    Registro2309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2309(Registro2309 r) {
    return r.valor + r.id;
}
