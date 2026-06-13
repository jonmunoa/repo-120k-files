// fichero 34041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34041;

Registro34041 crear_registro34041(int id) {
    Registro34041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34041(Registro34041 r) {
    return r.valor + r.id;
}
