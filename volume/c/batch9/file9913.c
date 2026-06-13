// fichero 9913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9913;

Registro9913 crear_registro9913(int id) {
    Registro9913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9913(Registro9913 r) {
    return r.valor + r.id;
}
