// fichero 26261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26261;

Registro26261 crear_registro26261(int id) {
    Registro26261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26261(Registro26261 r) {
    return r.valor + r.id;
}
