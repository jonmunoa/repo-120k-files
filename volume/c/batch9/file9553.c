// fichero 9553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9553;

Registro9553 crear_registro9553(int id) {
    Registro9553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9553(Registro9553 r) {
    return r.valor + r.id;
}
