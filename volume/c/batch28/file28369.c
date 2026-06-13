// fichero 28369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28369;

Registro28369 crear_registro28369(int id) {
    Registro28369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28369(Registro28369 r) {
    return r.valor + r.id;
}
