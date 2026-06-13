// fichero 54781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54781;

Registro54781 crear_registro54781(int id) {
    Registro54781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54781(Registro54781 r) {
    return r.valor + r.id;
}
