// fichero 31917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31917;

Registro31917 crear_registro31917(int id) {
    Registro31917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31917(Registro31917 r) {
    return r.valor + r.id;
}
