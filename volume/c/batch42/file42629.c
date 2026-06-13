// fichero 42629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42629;

Registro42629 crear_registro42629(int id) {
    Registro42629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42629(Registro42629 r) {
    return r.valor + r.id;
}
