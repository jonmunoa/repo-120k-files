// fichero 3577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3577;

Registro3577 crear_registro3577(int id) {
    Registro3577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3577(Registro3577 r) {
    return r.valor + r.id;
}
