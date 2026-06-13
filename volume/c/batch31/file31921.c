// fichero 31921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31921;

Registro31921 crear_registro31921(int id) {
    Registro31921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31921(Registro31921 r) {
    return r.valor + r.id;
}
