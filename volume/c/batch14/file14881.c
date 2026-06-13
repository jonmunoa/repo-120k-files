// fichero 14881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14881;

Registro14881 crear_registro14881(int id) {
    Registro14881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14881(Registro14881 r) {
    return r.valor + r.id;
}
