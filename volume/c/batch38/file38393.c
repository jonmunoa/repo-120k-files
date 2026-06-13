// fichero 38393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38393;

Registro38393 crear_registro38393(int id) {
    Registro38393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38393(Registro38393 r) {
    return r.valor + r.id;
}
