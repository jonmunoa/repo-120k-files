// fichero 5181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5181;

Registro5181 crear_registro5181(int id) {
    Registro5181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5181(Registro5181 r) {
    return r.valor + r.id;
}
