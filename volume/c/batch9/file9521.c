// fichero 9521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9521;

Registro9521 crear_registro9521(int id) {
    Registro9521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9521(Registro9521 r) {
    return r.valor + r.id;
}
