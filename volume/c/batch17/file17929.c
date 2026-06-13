// fichero 17929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17929;

Registro17929 crear_registro17929(int id) {
    Registro17929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17929(Registro17929 r) {
    return r.valor + r.id;
}
