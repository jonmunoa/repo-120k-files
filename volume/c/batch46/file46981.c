// fichero 46981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46981;

Registro46981 crear_registro46981(int id) {
    Registro46981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46981(Registro46981 r) {
    return r.valor + r.id;
}
