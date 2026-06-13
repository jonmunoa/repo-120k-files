// fichero 9489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9489;

Registro9489 crear_registro9489(int id) {
    Registro9489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9489(Registro9489 r) {
    return r.valor + r.id;
}
