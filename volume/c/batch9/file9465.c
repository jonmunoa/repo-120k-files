// fichero 9465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9465;

Registro9465 crear_registro9465(int id) {
    Registro9465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9465(Registro9465 r) {
    return r.valor + r.id;
}
