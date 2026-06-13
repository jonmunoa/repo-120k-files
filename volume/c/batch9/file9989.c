// fichero 9989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9989;

Registro9989 crear_registro9989(int id) {
    Registro9989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9989(Registro9989 r) {
    return r.valor + r.id;
}
