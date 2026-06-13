// fichero 869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro869;

Registro869 crear_registro869(int id) {
    Registro869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro869(Registro869 r) {
    return r.valor + r.id;
}
