// fichero 1741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1741;

Registro1741 crear_registro1741(int id) {
    Registro1741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1741(Registro1741 r) {
    return r.valor + r.id;
}
