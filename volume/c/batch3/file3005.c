// fichero 3005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3005;

Registro3005 crear_registro3005(int id) {
    Registro3005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3005(Registro3005 r) {
    return r.valor + r.id;
}
