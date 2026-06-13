// fichero 29477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29477;

Registro29477 crear_registro29477(int id) {
    Registro29477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29477(Registro29477 r) {
    return r.valor + r.id;
}
