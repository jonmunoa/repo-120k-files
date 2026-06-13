// fichero 28513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28513;

Registro28513 crear_registro28513(int id) {
    Registro28513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28513(Registro28513 r) {
    return r.valor + r.id;
}
