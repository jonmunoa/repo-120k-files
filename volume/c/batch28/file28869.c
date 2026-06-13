// fichero 28869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28869;

Registro28869 crear_registro28869(int id) {
    Registro28869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28869(Registro28869 r) {
    return r.valor + r.id;
}
