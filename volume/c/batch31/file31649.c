// fichero 31649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31649;

Registro31649 crear_registro31649(int id) {
    Registro31649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31649(Registro31649 r) {
    return r.valor + r.id;
}
