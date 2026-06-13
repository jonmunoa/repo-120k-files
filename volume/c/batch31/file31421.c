// fichero 31421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31421;

Registro31421 crear_registro31421(int id) {
    Registro31421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31421(Registro31421 r) {
    return r.valor + r.id;
}
