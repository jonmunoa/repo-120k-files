// fichero 2949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2949;

Registro2949 crear_registro2949(int id) {
    Registro2949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2949(Registro2949 r) {
    return r.valor + r.id;
}
