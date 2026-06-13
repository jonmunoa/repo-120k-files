// fichero 49869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49869;

Registro49869 crear_registro49869(int id) {
    Registro49869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49869(Registro49869 r) {
    return r.valor + r.id;
}
