// fichero 7261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7261;

Registro7261 crear_registro7261(int id) {
    Registro7261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7261(Registro7261 r) {
    return r.valor + r.id;
}
