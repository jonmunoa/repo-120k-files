// fichero 3921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3921;

Registro3921 crear_registro3921(int id) {
    Registro3921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3921(Registro3921 r) {
    return r.valor + r.id;
}
