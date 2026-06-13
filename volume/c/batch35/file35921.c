// fichero 35921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35921;

Registro35921 crear_registro35921(int id) {
    Registro35921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35921(Registro35921 r) {
    return r.valor + r.id;
}
