// fichero 2893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2893;

Registro2893 crear_registro2893(int id) {
    Registro2893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2893(Registro2893 r) {
    return r.valor + r.id;
}
