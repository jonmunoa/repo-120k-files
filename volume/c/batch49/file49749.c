// fichero 49749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49749;

Registro49749 crear_registro49749(int id) {
    Registro49749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49749(Registro49749 r) {
    return r.valor + r.id;
}
