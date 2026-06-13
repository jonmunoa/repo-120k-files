// fichero 23393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23393;

Registro23393 crear_registro23393(int id) {
    Registro23393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23393(Registro23393 r) {
    return r.valor + r.id;
}
