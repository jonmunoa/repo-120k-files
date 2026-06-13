// fichero 18869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18869;

Registro18869 crear_registro18869(int id) {
    Registro18869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18869(Registro18869 r) {
    return r.valor + r.id;
}
