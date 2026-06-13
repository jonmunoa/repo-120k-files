// fichero 3629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3629;

Registro3629 crear_registro3629(int id) {
    Registro3629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3629(Registro3629 r) {
    return r.valor + r.id;
}
