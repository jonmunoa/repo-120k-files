// fichero 3917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3917;

Registro3917 crear_registro3917(int id) {
    Registro3917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3917(Registro3917 r) {
    return r.valor + r.id;
}
