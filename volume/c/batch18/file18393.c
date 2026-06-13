// fichero 18393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18393;

Registro18393 crear_registro18393(int id) {
    Registro18393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18393(Registro18393 r) {
    return r.valor + r.id;
}
