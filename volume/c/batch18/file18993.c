// fichero 18993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18993;

Registro18993 crear_registro18993(int id) {
    Registro18993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18993(Registro18993 r) {
    return r.valor + r.id;
}
