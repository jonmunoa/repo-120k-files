// fichero 14917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14917;

Registro14917 crear_registro14917(int id) {
    Registro14917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14917(Registro14917 r) {
    return r.valor + r.id;
}
