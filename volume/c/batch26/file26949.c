// fichero 26949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26949;

Registro26949 crear_registro26949(int id) {
    Registro26949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26949(Registro26949 r) {
    return r.valor + r.id;
}
