// fichero 9405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9405;

Registro9405 crear_registro9405(int id) {
    Registro9405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9405(Registro9405 r) {
    return r.valor + r.id;
}
