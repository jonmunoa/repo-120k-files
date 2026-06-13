// fichero 36789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36789;

Registro36789 crear_registro36789(int id) {
    Registro36789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36789(Registro36789 r) {
    return r.valor + r.id;
}
