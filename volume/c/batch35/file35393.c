// fichero 35393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35393;

Registro35393 crear_registro35393(int id) {
    Registro35393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35393(Registro35393 r) {
    return r.valor + r.id;
}
