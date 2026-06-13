// fichero 3529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3529;

Registro3529 crear_registro3529(int id) {
    Registro3529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3529(Registro3529 r) {
    return r.valor + r.id;
}
