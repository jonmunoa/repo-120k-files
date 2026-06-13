// fichero 50393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50393;

Registro50393 crear_registro50393(int id) {
    Registro50393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50393(Registro50393 r) {
    return r.valor + r.id;
}
