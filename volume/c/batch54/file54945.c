// fichero 54945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54945;

Registro54945 crear_registro54945(int id) {
    Registro54945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54945(Registro54945 r) {
    return r.valor + r.id;
}
