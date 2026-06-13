// fichero 49465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49465;

Registro49465 crear_registro49465(int id) {
    Registro49465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49465(Registro49465 r) {
    return r.valor + r.id;
}
