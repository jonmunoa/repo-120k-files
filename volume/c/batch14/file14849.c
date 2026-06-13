// fichero 14849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14849;

Registro14849 crear_registro14849(int id) {
    Registro14849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14849(Registro14849 r) {
    return r.valor + r.id;
}
