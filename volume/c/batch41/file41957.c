// fichero 41957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41957;

Registro41957 crear_registro41957(int id) {
    Registro41957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41957(Registro41957 r) {
    return r.valor + r.id;
}
