// fichero 765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro765;

Registro765 crear_registro765(int id) {
    Registro765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro765(Registro765 r) {
    return r.valor + r.id;
}
