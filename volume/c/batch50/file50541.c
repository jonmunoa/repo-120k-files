// fichero 50541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50541;

Registro50541 crear_registro50541(int id) {
    Registro50541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50541(Registro50541 r) {
    return r.valor + r.id;
}
