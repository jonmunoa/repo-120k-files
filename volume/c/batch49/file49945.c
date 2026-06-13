// fichero 49945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49945;

Registro49945 crear_registro49945(int id) {
    Registro49945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49945(Registro49945 r) {
    return r.valor + r.id;
}
