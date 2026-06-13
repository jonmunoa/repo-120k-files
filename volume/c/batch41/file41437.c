// fichero 41437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41437;

Registro41437 crear_registro41437(int id) {
    Registro41437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41437(Registro41437 r) {
    return r.valor + r.id;
}
