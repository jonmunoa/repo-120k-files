// fichero 50153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50153;

Registro50153 crear_registro50153(int id) {
    Registro50153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50153(Registro50153 r) {
    return r.valor + r.id;
}
