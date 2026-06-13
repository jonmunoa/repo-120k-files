// fichero 49553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49553;

Registro49553 crear_registro49553(int id) {
    Registro49553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49553(Registro49553 r) {
    return r.valor + r.id;
}
