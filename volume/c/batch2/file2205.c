// fichero 2205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2205;

Registro2205 crear_registro2205(int id) {
    Registro2205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2205(Registro2205 r) {
    return r.valor + r.id;
}
