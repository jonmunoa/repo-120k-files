// fichero 8949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8949;

Registro8949 crear_registro8949(int id) {
    Registro8949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8949(Registro8949 r) {
    return r.valor + r.id;
}
