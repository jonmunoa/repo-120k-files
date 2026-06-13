// fichero 9105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9105;

Registro9105 crear_registro9105(int id) {
    Registro9105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9105(Registro9105 r) {
    return r.valor + r.id;
}
