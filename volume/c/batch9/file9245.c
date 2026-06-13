// fichero 9245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9245;

Registro9245 crear_registro9245(int id) {
    Registro9245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9245(Registro9245 r) {
    return r.valor + r.id;
}
