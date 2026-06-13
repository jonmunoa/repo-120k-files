// fichero 3661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3661;

Registro3661 crear_registro3661(int id) {
    Registro3661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3661(Registro3661 r) {
    return r.valor + r.id;
}
