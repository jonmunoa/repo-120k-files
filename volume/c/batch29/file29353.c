// fichero 29353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29353;

Registro29353 crear_registro29353(int id) {
    Registro29353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29353(Registro29353 r) {
    return r.valor + r.id;
}
