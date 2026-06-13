// fichero 43985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43985;

Registro43985 crear_registro43985(int id) {
    Registro43985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43985(Registro43985 r) {
    return r.valor + r.id;
}
