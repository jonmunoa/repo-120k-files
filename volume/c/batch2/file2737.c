// fichero 2737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2737;

Registro2737 crear_registro2737(int id) {
    Registro2737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2737(Registro2737 r) {
    return r.valor + r.id;
}
