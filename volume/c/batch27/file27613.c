// fichero 27613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27613;

Registro27613 crear_registro27613(int id) {
    Registro27613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27613(Registro27613 r) {
    return r.valor + r.id;
}
