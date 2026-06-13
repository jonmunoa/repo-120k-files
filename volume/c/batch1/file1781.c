// fichero 1781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1781;

Registro1781 crear_registro1781(int id) {
    Registro1781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1781(Registro1781 r) {
    return r.valor + r.id;
}
