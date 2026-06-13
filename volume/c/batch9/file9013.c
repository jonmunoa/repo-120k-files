// fichero 9013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9013;

Registro9013 crear_registro9013(int id) {
    Registro9013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9013(Registro9013 r) {
    return r.valor + r.id;
}
