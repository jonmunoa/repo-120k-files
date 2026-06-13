// fichero 9729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9729;

Registro9729 crear_registro9729(int id) {
    Registro9729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9729(Registro9729 r) {
    return r.valor + r.id;
}
