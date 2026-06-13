// fichero 24513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24513;

Registro24513 crear_registro24513(int id) {
    Registro24513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24513(Registro24513 r) {
    return r.valor + r.id;
}
