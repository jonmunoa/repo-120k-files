// fichero 34369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34369;

Registro34369 crear_registro34369(int id) {
    Registro34369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34369(Registro34369 r) {
    return r.valor + r.id;
}
