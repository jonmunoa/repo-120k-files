// fichero 32981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32981;

Registro32981 crear_registro32981(int id) {
    Registro32981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32981(Registro32981 r) {
    return r.valor + r.id;
}
