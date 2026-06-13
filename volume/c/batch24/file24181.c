// fichero 24181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24181;

Registro24181 crear_registro24181(int id) {
    Registro24181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24181(Registro24181 r) {
    return r.valor + r.id;
}
