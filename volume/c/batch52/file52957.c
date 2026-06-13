// fichero 52957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52957;

Registro52957 crear_registro52957(int id) {
    Registro52957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52957(Registro52957 r) {
    return r.valor + r.id;
}
