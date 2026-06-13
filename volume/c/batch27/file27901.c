// fichero 27901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27901;

Registro27901 crear_registro27901(int id) {
    Registro27901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27901(Registro27901 r) {
    return r.valor + r.id;
}
