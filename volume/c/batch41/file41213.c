// fichero 41213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41213;

Registro41213 crear_registro41213(int id) {
    Registro41213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41213(Registro41213 r) {
    return r.valor + r.id;
}
