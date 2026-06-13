// fichero 12065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12065;

Registro12065 crear_registro12065(int id) {
    Registro12065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12065(Registro12065 r) {
    return r.valor + r.id;
}
