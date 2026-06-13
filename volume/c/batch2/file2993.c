// fichero 2993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2993;

Registro2993 crear_registro2993(int id) {
    Registro2993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2993(Registro2993 r) {
    return r.valor + r.id;
}
