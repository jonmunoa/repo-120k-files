// fichero 28381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28381;

Registro28381 crear_registro28381(int id) {
    Registro28381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28381(Registro28381 r) {
    return r.valor + r.id;
}
