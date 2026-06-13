// fichero 24117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24117;

Registro24117 crear_registro24117(int id) {
    Registro24117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24117(Registro24117 r) {
    return r.valor + r.id;
}
