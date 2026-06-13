// fichero 4929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4929;

Registro4929 crear_registro4929(int id) {
    Registro4929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4929(Registro4929 r) {
    return r.valor + r.id;
}
