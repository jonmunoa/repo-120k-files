// fichero 31869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31869;

Registro31869 crear_registro31869(int id) {
    Registro31869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31869(Registro31869 r) {
    return r.valor + r.id;
}
