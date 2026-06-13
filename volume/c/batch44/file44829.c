// fichero 44829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44829;

Registro44829 crear_registro44829(int id) {
    Registro44829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44829(Registro44829 r) {
    return r.valor + r.id;
}
