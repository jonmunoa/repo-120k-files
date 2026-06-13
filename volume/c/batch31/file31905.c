// fichero 31905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31905;

Registro31905 crear_registro31905(int id) {
    Registro31905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31905(Registro31905 r) {
    return r.valor + r.id;
}
