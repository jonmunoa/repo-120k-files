// fichero 40957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40957;

Registro40957 crear_registro40957(int id) {
    Registro40957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40957(Registro40957 r) {
    return r.valor + r.id;
}
