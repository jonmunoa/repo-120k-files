// fichero 29641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29641;

Registro29641 crear_registro29641(int id) {
    Registro29641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29641(Registro29641 r) {
    return r.valor + r.id;
}
