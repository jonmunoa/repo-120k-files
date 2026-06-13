// fichero 8629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8629;

Registro8629 crear_registro8629(int id) {
    Registro8629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8629(Registro8629 r) {
    return r.valor + r.id;
}
