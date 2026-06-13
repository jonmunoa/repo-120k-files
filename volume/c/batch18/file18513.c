// fichero 18513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18513;

Registro18513 crear_registro18513(int id) {
    Registro18513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18513(Registro18513 r) {
    return r.valor + r.id;
}
