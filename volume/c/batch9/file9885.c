// fichero 9885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9885;

Registro9885 crear_registro9885(int id) {
    Registro9885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9885(Registro9885 r) {
    return r.valor + r.id;
}
