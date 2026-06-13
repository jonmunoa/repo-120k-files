// fichero 18829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18829;

Registro18829 crear_registro18829(int id) {
    Registro18829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18829(Registro18829 r) {
    return r.valor + r.id;
}
