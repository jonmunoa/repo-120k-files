// fichero 50237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50237;

Registro50237 crear_registro50237(int id) {
    Registro50237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50237(Registro50237 r) {
    return r.valor + r.id;
}
