// fichero 2917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2917;

Registro2917 crear_registro2917(int id) {
    Registro2917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2917(Registro2917 r) {
    return r.valor + r.id;
}
