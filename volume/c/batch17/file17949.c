// fichero 17949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17949;

Registro17949 crear_registro17949(int id) {
    Registro17949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17949(Registro17949 r) {
    return r.valor + r.id;
}
