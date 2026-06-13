// fichero 17945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17945;

Registro17945 crear_registro17945(int id) {
    Registro17945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17945(Registro17945 r) {
    return r.valor + r.id;
}
