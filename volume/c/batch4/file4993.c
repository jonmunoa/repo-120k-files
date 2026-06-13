// fichero 4993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4993;

Registro4993 crear_registro4993(int id) {
    Registro4993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4993(Registro4993 r) {
    return r.valor + r.id;
}
