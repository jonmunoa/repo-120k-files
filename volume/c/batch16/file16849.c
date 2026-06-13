// fichero 16849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16849;

Registro16849 crear_registro16849(int id) {
    Registro16849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16849(Registro16849 r) {
    return r.valor + r.id;
}
