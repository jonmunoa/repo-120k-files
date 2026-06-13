// fichero 31325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31325;

Registro31325 crear_registro31325(int id) {
    Registro31325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31325(Registro31325 r) {
    return r.valor + r.id;
}
