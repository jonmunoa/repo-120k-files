// fichero 43801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43801;

Registro43801 crear_registro43801(int id) {
    Registro43801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43801(Registro43801 r) {
    return r.valor + r.id;
}
