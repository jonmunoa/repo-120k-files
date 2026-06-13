// fichero 31737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31737;

Registro31737 crear_registro31737(int id) {
    Registro31737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31737(Registro31737 r) {
    return r.valor + r.id;
}
