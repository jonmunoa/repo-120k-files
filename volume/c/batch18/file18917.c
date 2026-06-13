// fichero 18917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18917;

Registro18917 crear_registro18917(int id) {
    Registro18917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18917(Registro18917 r) {
    return r.valor + r.id;
}
