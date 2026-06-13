// fichero 31157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31157;

Registro31157 crear_registro31157(int id) {
    Registro31157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31157(Registro31157 r) {
    return r.valor + r.id;
}
