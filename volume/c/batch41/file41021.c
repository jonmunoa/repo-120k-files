// fichero 41021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41021;

Registro41021 crear_registro41021(int id) {
    Registro41021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41021(Registro41021 r) {
    return r.valor + r.id;
}
