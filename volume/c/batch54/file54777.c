// fichero 54777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54777;

Registro54777 crear_registro54777(int id) {
    Registro54777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54777(Registro54777 r) {
    return r.valor + r.id;
}
