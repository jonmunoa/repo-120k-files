// fichero 32841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32841;

Registro32841 crear_registro32841(int id) {
    Registro32841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32841(Registro32841 r) {
    return r.valor + r.id;
}
