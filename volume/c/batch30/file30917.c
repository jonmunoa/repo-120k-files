// fichero 30917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30917;

Registro30917 crear_registro30917(int id) {
    Registro30917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30917(Registro30917 r) {
    return r.valor + r.id;
}
