// fichero 9453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9453;

Registro9453 crear_registro9453(int id) {
    Registro9453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9453(Registro9453 r) {
    return r.valor + r.id;
}
