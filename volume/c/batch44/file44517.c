// fichero 44517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44517;

Registro44517 crear_registro44517(int id) {
    Registro44517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44517(Registro44517 r) {
    return r.valor + r.id;
}
