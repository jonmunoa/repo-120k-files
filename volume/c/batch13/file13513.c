// fichero 13513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13513;

Registro13513 crear_registro13513(int id) {
    Registro13513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13513(Registro13513 r) {
    return r.valor + r.id;
}
