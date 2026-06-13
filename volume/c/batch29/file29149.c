// fichero 29149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29149;

Registro29149 crear_registro29149(int id) {
    Registro29149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29149(Registro29149 r) {
    return r.valor + r.id;
}
