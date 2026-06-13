// fichero 9709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9709;

Registro9709 crear_registro9709(int id) {
    Registro9709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9709(Registro9709 r) {
    return r.valor + r.id;
}
