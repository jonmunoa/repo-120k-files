// fichero 54829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54829;

Registro54829 crear_registro54829(int id) {
    Registro54829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54829(Registro54829 r) {
    return r.valor + r.id;
}
