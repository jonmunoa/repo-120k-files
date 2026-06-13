// fichero 18301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18301;

Registro18301 crear_registro18301(int id) {
    Registro18301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18301(Registro18301 r) {
    return r.valor + r.id;
}
