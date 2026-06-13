// fichero 24185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24185;

Registro24185 crear_registro24185(int id) {
    Registro24185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24185(Registro24185 r) {
    return r.valor + r.id;
}
