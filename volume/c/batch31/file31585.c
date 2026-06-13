// fichero 31585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31585;

Registro31585 crear_registro31585(int id) {
    Registro31585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31585(Registro31585 r) {
    return r.valor + r.id;
}
