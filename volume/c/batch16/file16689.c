// fichero 16689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16689;

Registro16689 crear_registro16689(int id) {
    Registro16689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16689(Registro16689 r) {
    return r.valor + r.id;
}
