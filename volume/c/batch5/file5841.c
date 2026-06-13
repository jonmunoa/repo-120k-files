// fichero 5841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5841;

Registro5841 crear_registro5841(int id) {
    Registro5841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5841(Registro5841 r) {
    return r.valor + r.id;
}
