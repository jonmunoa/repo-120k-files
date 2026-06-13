// fichero 18953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18953;

Registro18953 crear_registro18953(int id) {
    Registro18953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18953(Registro18953 r) {
    return r.valor + r.id;
}
