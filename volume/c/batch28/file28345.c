// fichero 28345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28345;

Registro28345 crear_registro28345(int id) {
    Registro28345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28345(Registro28345 r) {
    return r.valor + r.id;
}
