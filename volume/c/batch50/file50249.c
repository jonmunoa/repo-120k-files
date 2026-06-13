// fichero 50249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50249;

Registro50249 crear_registro50249(int id) {
    Registro50249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50249(Registro50249 r) {
    return r.valor + r.id;
}
