// fichero 47957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47957;

Registro47957 crear_registro47957(int id) {
    Registro47957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47957(Registro47957 r) {
    return r.valor + r.id;
}
