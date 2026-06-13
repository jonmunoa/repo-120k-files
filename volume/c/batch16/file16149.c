// fichero 16149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16149;

Registro16149 crear_registro16149(int id) {
    Registro16149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16149(Registro16149 r) {
    return r.valor + r.id;
}
