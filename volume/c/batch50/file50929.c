// fichero 50929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50929;

Registro50929 crear_registro50929(int id) {
    Registro50929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50929(Registro50929 r) {
    return r.valor + r.id;
}
