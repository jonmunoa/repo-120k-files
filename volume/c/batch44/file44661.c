// fichero 44661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44661;

Registro44661 crear_registro44661(int id) {
    Registro44661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44661(Registro44661 r) {
    return r.valor + r.id;
}
