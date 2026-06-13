// fichero 50993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50993;

Registro50993 crear_registro50993(int id) {
    Registro50993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50993(Registro50993 r) {
    return r.valor + r.id;
}
