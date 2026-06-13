// fichero 50125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50125;

Registro50125 crear_registro50125(int id) {
    Registro50125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50125(Registro50125 r) {
    return r.valor + r.id;
}
