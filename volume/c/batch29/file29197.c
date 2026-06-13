// fichero 29197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29197;

Registro29197 crear_registro29197(int id) {
    Registro29197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29197(Registro29197 r) {
    return r.valor + r.id;
}
