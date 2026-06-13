// fichero 26917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26917;

Registro26917 crear_registro26917(int id) {
    Registro26917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26917(Registro26917 r) {
    return r.valor + r.id;
}
