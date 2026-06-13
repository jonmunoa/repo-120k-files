// fichero 36553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36553;

Registro36553 crear_registro36553(int id) {
    Registro36553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36553(Registro36553 r) {
    return r.valor + r.id;
}
