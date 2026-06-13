// fichero 9113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9113;

Registro9113 crear_registro9113(int id) {
    Registro9113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9113(Registro9113 r) {
    return r.valor + r.id;
}
