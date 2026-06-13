// fichero 49069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49069;

Registro49069 crear_registro49069(int id) {
    Registro49069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49069(Registro49069 r) {
    return r.valor + r.id;
}
