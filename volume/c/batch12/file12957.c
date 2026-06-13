// fichero 12957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12957;

Registro12957 crear_registro12957(int id) {
    Registro12957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12957(Registro12957 r) {
    return r.valor + r.id;
}
