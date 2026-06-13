// fichero 18181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18181;

Registro18181 crear_registro18181(int id) {
    Registro18181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18181(Registro18181 r) {
    return r.valor + r.id;
}
