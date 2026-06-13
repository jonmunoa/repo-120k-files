// fichero 19949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19949;

Registro19949 crear_registro19949(int id) {
    Registro19949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19949(Registro19949 r) {
    return r.valor + r.id;
}
