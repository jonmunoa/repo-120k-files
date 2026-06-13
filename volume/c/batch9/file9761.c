// fichero 9761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9761;

Registro9761 crear_registro9761(int id) {
    Registro9761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9761(Registro9761 r) {
    return r.valor + r.id;
}
