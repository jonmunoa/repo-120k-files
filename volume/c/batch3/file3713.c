// fichero 3713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3713;

Registro3713 crear_registro3713(int id) {
    Registro3713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3713(Registro3713 r) {
    return r.valor + r.id;
}
