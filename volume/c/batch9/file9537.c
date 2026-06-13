// fichero 9537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9537;

Registro9537 crear_registro9537(int id) {
    Registro9537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9537(Registro9537 r) {
    return r.valor + r.id;
}
