// fichero 3993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3993;

Registro3993 crear_registro3993(int id) {
    Registro3993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3993(Registro3993 r) {
    return r.valor + r.id;
}
