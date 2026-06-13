// fichero 27201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27201;

Registro27201 crear_registro27201(int id) {
    Registro27201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27201(Registro27201 r) {
    return r.valor + r.id;
}
