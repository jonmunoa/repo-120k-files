// fichero 18685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18685;

Registro18685 crear_registro18685(int id) {
    Registro18685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18685(Registro18685 r) {
    return r.valor + r.id;
}
