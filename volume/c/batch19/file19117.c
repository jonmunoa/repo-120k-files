// fichero 19117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19117;

Registro19117 crear_registro19117(int id) {
    Registro19117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19117(Registro19117 r) {
    return r.valor + r.id;
}
