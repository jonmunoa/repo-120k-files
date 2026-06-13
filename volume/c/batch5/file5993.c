// fichero 5993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5993;

Registro5993 crear_registro5993(int id) {
    Registro5993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5993(Registro5993 r) {
    return r.valor + r.id;
}
