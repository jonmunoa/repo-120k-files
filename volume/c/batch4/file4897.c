// fichero 4897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4897;

Registro4897 crear_registro4897(int id) {
    Registro4897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4897(Registro4897 r) {
    return r.valor + r.id;
}
