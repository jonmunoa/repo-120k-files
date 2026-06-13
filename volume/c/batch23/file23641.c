// fichero 23641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23641;

Registro23641 crear_registro23641(int id) {
    Registro23641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23641(Registro23641 r) {
    return r.valor + r.id;
}
