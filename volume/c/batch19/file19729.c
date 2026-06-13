// fichero 19729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19729;

Registro19729 crear_registro19729(int id) {
    Registro19729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19729(Registro19729 r) {
    return r.valor + r.id;
}
