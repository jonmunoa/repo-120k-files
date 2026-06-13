// fichero 18193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18193;

Registro18193 crear_registro18193(int id) {
    Registro18193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18193(Registro18193 r) {
    return r.valor + r.id;
}
