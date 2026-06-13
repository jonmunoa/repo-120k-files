// fichero 48949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48949;

Registro48949 crear_registro48949(int id) {
    Registro48949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48949(Registro48949 r) {
    return r.valor + r.id;
}
