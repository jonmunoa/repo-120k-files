// fichero 53813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53813;

Registro53813 crear_registro53813(int id) {
    Registro53813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53813(Registro53813 r) {
    return r.valor + r.id;
}
