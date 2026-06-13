// fichero 10173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10173;

Registro10173 crear_registro10173(int id) {
    Registro10173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10173(Registro10173 r) {
    return r.valor + r.id;
}
