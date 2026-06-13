// fichero 16445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16445;

Registro16445 crear_registro16445(int id) {
    Registro16445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16445(Registro16445 r) {
    return r.valor + r.id;
}
