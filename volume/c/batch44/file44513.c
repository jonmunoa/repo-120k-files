// fichero 44513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44513;

Registro44513 crear_registro44513(int id) {
    Registro44513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44513(Registro44513 r) {
    return r.valor + r.id;
}
