// fichero 3949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3949;

Registro3949 crear_registro3949(int id) {
    Registro3949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3949(Registro3949 r) {
    return r.valor + r.id;
}
