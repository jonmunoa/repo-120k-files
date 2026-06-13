// fichero 29289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29289;

Registro29289 crear_registro29289(int id) {
    Registro29289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29289(Registro29289 r) {
    return r.valor + r.id;
}
