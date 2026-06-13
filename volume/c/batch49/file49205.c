// fichero 49205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49205;

Registro49205 crear_registro49205(int id) {
    Registro49205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49205(Registro49205 r) {
    return r.valor + r.id;
}
