// fichero 38869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38869;

Registro38869 crear_registro38869(int id) {
    Registro38869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38869(Registro38869 r) {
    return r.valor + r.id;
}
