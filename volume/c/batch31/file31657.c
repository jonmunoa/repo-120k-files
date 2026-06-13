// fichero 31657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31657;

Registro31657 crear_registro31657(int id) {
    Registro31657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31657(Registro31657 r) {
    return r.valor + r.id;
}
