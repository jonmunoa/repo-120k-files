// fichero 23109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23109;

Registro23109 crear_registro23109(int id) {
    Registro23109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23109(Registro23109 r) {
    return r.valor + r.id;
}
