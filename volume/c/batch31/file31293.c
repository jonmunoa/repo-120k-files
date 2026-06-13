// fichero 31293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31293;

Registro31293 crear_registro31293(int id) {
    Registro31293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31293(Registro31293 r) {
    return r.valor + r.id;
}
