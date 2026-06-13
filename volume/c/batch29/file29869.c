// fichero 29869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29869;

Registro29869 crear_registro29869(int id) {
    Registro29869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29869(Registro29869 r) {
    return r.valor + r.id;
}
