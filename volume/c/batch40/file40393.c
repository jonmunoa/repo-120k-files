// fichero 40393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40393;

Registro40393 crear_registro40393(int id) {
    Registro40393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40393(Registro40393 r) {
    return r.valor + r.id;
}
