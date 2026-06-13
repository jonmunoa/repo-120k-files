// fichero 2837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2837;

Registro2837 crear_registro2837(int id) {
    Registro2837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2837(Registro2837 r) {
    return r.valor + r.id;
}
