// fichero 44261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44261;

Registro44261 crear_registro44261(int id) {
    Registro44261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44261(Registro44261 r) {
    return r.valor + r.id;
}
