// fichero 3209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3209;

Registro3209 crear_registro3209(int id) {
    Registro3209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3209(Registro3209 r) {
    return r.valor + r.id;
}
