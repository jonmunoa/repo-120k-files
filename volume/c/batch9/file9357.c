// fichero 9357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9357;

Registro9357 crear_registro9357(int id) {
    Registro9357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9357(Registro9357 r) {
    return r.valor + r.id;
}
