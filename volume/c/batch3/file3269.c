// fichero 3269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3269;

Registro3269 crear_registro3269(int id) {
    Registro3269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3269(Registro3269 r) {
    return r.valor + r.id;
}
