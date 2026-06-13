// fichero 26785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26785;

Registro26785 crear_registro26785(int id) {
    Registro26785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26785(Registro26785 r) {
    return r.valor + r.id;
}
