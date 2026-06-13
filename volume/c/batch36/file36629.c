// fichero 36629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36629;

Registro36629 crear_registro36629(int id) {
    Registro36629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36629(Registro36629 r) {
    return r.valor + r.id;
}
