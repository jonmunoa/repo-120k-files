// fichero 5513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5513;

Registro5513 crear_registro5513(int id) {
    Registro5513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5513(Registro5513 r) {
    return r.valor + r.id;
}
