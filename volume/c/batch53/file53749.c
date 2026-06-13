// fichero 53749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53749;

Registro53749 crear_registro53749(int id) {
    Registro53749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53749(Registro53749 r) {
    return r.valor + r.id;
}
