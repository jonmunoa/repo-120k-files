// fichero 50749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50749;

Registro50749 crear_registro50749(int id) {
    Registro50749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50749(Registro50749 r) {
    return r.valor + r.id;
}
