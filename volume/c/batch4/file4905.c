// fichero 4905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4905;

Registro4905 crear_registro4905(int id) {
    Registro4905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4905(Registro4905 r) {
    return r.valor + r.id;
}
