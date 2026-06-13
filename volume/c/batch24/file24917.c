// fichero 24917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24917;

Registro24917 crear_registro24917(int id) {
    Registro24917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24917(Registro24917 r) {
    return r.valor + r.id;
}
