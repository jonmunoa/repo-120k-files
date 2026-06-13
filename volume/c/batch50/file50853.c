// fichero 50853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50853;

Registro50853 crear_registro50853(int id) {
    Registro50853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50853(Registro50853 r) {
    return r.valor + r.id;
}
