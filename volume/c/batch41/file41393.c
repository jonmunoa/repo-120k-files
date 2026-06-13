// fichero 41393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41393;

Registro41393 crear_registro41393(int id) {
    Registro41393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41393(Registro41393 r) {
    return r.valor + r.id;
}
