// fichero 14629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14629;

Registro14629 crear_registro14629(int id) {
    Registro14629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14629(Registro14629 r) {
    return r.valor + r.id;
}
