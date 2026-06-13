// fichero 18065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18065;

Registro18065 crear_registro18065(int id) {
    Registro18065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18065(Registro18065 r) {
    return r.valor + r.id;
}
