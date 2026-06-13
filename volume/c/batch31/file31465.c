// fichero 31465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31465;

Registro31465 crear_registro31465(int id) {
    Registro31465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31465(Registro31465 r) {
    return r.valor + r.id;
}
