// fichero 5981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5981;

Registro5981 crear_registro5981(int id) {
    Registro5981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5981(Registro5981 r) {
    return r.valor + r.id;
}
