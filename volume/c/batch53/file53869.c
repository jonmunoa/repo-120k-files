// fichero 53869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53869;

Registro53869 crear_registro53869(int id) {
    Registro53869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53869(Registro53869 r) {
    return r.valor + r.id;
}
