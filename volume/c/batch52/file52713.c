// fichero 52713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52713;

Registro52713 crear_registro52713(int id) {
    Registro52713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52713(Registro52713 r) {
    return r.valor + r.id;
}
