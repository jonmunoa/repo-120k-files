// fichero 9177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9177;

Registro9177 crear_registro9177(int id) {
    Registro9177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9177(Registro9177 r) {
    return r.valor + r.id;
}
