// fichero 9257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9257;

Registro9257 crear_registro9257(int id) {
    Registro9257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9257(Registro9257 r) {
    return r.valor + r.id;
}
