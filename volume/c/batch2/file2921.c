// fichero 2921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2921;

Registro2921 crear_registro2921(int id) {
    Registro2921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2921(Registro2921 r) {
    return r.valor + r.id;
}
