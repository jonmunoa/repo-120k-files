// fichero 1317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1317;

Registro1317 crear_registro1317(int id) {
    Registro1317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1317(Registro1317 r) {
    return r.valor + r.id;
}
