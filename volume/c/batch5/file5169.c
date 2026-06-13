// fichero 5169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5169;

Registro5169 crear_registro5169(int id) {
    Registro5169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5169(Registro5169 r) {
    return r.valor + r.id;
}
