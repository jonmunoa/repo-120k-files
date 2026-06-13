// fichero 20981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20981;

Registro20981 crear_registro20981(int id) {
    Registro20981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20981(Registro20981 r) {
    return r.valor + r.id;
}
