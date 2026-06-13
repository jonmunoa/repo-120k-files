// fichero 31165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31165;

Registro31165 crear_registro31165(int id) {
    Registro31165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31165(Registro31165 r) {
    return r.valor + r.id;
}
