// fichero 3557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3557;

Registro3557 crear_registro3557(int id) {
    Registro3557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3557(Registro3557 r) {
    return r.valor + r.id;
}
