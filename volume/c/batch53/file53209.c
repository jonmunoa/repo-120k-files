// fichero 53209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53209;

Registro53209 crear_registro53209(int id) {
    Registro53209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53209(Registro53209 r) {
    return r.valor + r.id;
}
