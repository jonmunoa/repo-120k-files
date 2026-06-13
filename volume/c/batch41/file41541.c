// fichero 41541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41541;

Registro41541 crear_registro41541(int id) {
    Registro41541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41541(Registro41541 r) {
    return r.valor + r.id;
}
