// fichero 6661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6661;

Registro6661 crear_registro6661(int id) {
    Registro6661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6661(Registro6661 r) {
    return r.valor + r.id;
}
