// fichero 34869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34869;

Registro34869 crear_registro34869(int id) {
    Registro34869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34869(Registro34869 r) {
    return r.valor + r.id;
}
