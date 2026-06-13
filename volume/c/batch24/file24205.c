// fichero 24205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24205;

Registro24205 crear_registro24205(int id) {
    Registro24205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24205(Registro24205 r) {
    return r.valor + r.id;
}
