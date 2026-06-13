// fichero 31117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31117;

Registro31117 crear_registro31117(int id) {
    Registro31117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31117(Registro31117 r) {
    return r.valor + r.id;
}
