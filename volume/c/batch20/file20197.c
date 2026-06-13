// fichero 20197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20197;

Registro20197 crear_registro20197(int id) {
    Registro20197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20197(Registro20197 r) {
    return r.valor + r.id;
}
