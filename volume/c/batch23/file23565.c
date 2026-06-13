// fichero 23565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23565;

Registro23565 crear_registro23565(int id) {
    Registro23565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23565(Registro23565 r) {
    return r.valor + r.id;
}
