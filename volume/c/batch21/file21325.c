// fichero 21325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21325;

Registro21325 crear_registro21325(int id) {
    Registro21325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21325(Registro21325 r) {
    return r.valor + r.id;
}
