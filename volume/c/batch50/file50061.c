// fichero 50061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50061;

Registro50061 crear_registro50061(int id) {
    Registro50061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50061(Registro50061 r) {
    return r.valor + r.id;
}
