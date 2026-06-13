// fichero 49177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49177;

Registro49177 crear_registro49177(int id) {
    Registro49177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49177(Registro49177 r) {
    return r.valor + r.id;
}
