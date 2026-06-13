// fichero 3817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3817;

Registro3817 crear_registro3817(int id) {
    Registro3817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3817(Registro3817 r) {
    return r.valor + r.id;
}
