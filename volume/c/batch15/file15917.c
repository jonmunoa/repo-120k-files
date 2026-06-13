// fichero 15917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15917;

Registro15917 crear_registro15917(int id) {
    Registro15917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15917(Registro15917 r) {
    return r.valor + r.id;
}
