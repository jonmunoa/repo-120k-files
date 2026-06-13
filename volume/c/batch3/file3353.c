// fichero 3353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3353;

Registro3353 crear_registro3353(int id) {
    Registro3353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3353(Registro3353 r) {
    return r.valor + r.id;
}
