// fichero 23917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23917;

Registro23917 crear_registro23917(int id) {
    Registro23917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23917(Registro23917 r) {
    return r.valor + r.id;
}
