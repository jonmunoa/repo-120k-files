// fichero 47205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47205;

Registro47205 crear_registro47205(int id) {
    Registro47205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47205(Registro47205 r) {
    return r.valor + r.id;
}
