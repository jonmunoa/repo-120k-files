// fichero 50301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50301;

Registro50301 crear_registro50301(int id) {
    Registro50301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50301(Registro50301 r) {
    return r.valor + r.id;
}
