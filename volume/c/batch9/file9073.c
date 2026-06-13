// fichero 9073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9073;

Registro9073 crear_registro9073(int id) {
    Registro9073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9073(Registro9073 r) {
    return r.valor + r.id;
}
