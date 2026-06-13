// fichero 47993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47993;

Registro47993 crear_registro47993(int id) {
    Registro47993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47993(Registro47993 r) {
    return r.valor + r.id;
}
