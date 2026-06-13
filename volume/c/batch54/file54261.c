// fichero 54261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54261;

Registro54261 crear_registro54261(int id) {
    Registro54261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54261(Registro54261 r) {
    return r.valor + r.id;
}
