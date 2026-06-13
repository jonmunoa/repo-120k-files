// fichero 38921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38921;

Registro38921 crear_registro38921(int id) {
    Registro38921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38921(Registro38921 r) {
    return r.valor + r.id;
}
