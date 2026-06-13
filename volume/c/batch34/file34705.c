// fichero 34705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34705;

Registro34705 crear_registro34705(int id) {
    Registro34705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34705(Registro34705 r) {
    return r.valor + r.id;
}
