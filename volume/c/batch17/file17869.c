// fichero 17869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17869;

Registro17869 crear_registro17869(int id) {
    Registro17869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17869(Registro17869 r) {
    return r.valor + r.id;
}
