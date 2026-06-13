// fichero 45981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45981;

Registro45981 crear_registro45981(int id) {
    Registro45981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45981(Registro45981 r) {
    return r.valor + r.id;
}
