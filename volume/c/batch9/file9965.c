// fichero 9965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9965;

Registro9965 crear_registro9965(int id) {
    Registro9965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9965(Registro9965 r) {
    return r.valor + r.id;
}
