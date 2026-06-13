// fichero 18705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18705;

Registro18705 crear_registro18705(int id) {
    Registro18705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18705(Registro18705 r) {
    return r.valor + r.id;
}
