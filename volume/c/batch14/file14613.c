// fichero 14613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14613;

Registro14613 crear_registro14613(int id) {
    Registro14613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14613(Registro14613 r) {
    return r.valor + r.id;
}
