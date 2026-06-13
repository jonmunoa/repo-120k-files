// fichero 49089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49089;

Registro49089 crear_registro49089(int id) {
    Registro49089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49089(Registro49089 r) {
    return r.valor + r.id;
}
