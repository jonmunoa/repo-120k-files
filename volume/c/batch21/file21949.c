// fichero 21949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21949;

Registro21949 crear_registro21949(int id) {
    Registro21949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21949(Registro21949 r) {
    return r.valor + r.id;
}
