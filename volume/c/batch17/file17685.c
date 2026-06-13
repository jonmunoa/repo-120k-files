// fichero 17685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17685;

Registro17685 crear_registro17685(int id) {
    Registro17685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17685(Registro17685 r) {
    return r.valor + r.id;
}
