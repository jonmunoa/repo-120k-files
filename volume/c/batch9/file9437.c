// fichero 9437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9437;

Registro9437 crear_registro9437(int id) {
    Registro9437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9437(Registro9437 r) {
    return r.valor + r.id;
}
