// fichero 23869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23869;

Registro23869 crear_registro23869(int id) {
    Registro23869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23869(Registro23869 r) {
    return r.valor + r.id;
}
