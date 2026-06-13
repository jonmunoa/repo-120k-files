// fichero 48993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48993;

Registro48993 crear_registro48993(int id) {
    Registro48993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48993(Registro48993 r) {
    return r.valor + r.id;
}
