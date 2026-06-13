// fichero 50049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50049;

Registro50049 crear_registro50049(int id) {
    Registro50049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50049(Registro50049 r) {
    return r.valor + r.id;
}
