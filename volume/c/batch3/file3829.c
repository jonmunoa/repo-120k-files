// fichero 3829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3829;

Registro3829 crear_registro3829(int id) {
    Registro3829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3829(Registro3829 r) {
    return r.valor + r.id;
}
