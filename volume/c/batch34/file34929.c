// fichero 34929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34929;

Registro34929 crear_registro34929(int id) {
    Registro34929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34929(Registro34929 r) {
    return r.valor + r.id;
}
