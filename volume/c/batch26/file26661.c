// fichero 26661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26661;

Registro26661 crear_registro26661(int id) {
    Registro26661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26661(Registro26661 r) {
    return r.valor + r.id;
}
