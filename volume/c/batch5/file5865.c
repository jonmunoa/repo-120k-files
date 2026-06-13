// fichero 5865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5865;

Registro5865 crear_registro5865(int id) {
    Registro5865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5865(Registro5865 r) {
    return r.valor + r.id;
}
