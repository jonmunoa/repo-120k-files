// fichero 29801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29801;

Registro29801 crear_registro29801(int id) {
    Registro29801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29801(Registro29801 r) {
    return r.valor + r.id;
}
