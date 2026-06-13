// fichero 49197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49197;

Registro49197 crear_registro49197(int id) {
    Registro49197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49197(Registro49197 r) {
    return r.valor + r.id;
}
