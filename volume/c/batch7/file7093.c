// fichero 7093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7093;

Registro7093 crear_registro7093(int id) {
    Registro7093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7093(Registro7093 r) {
    return r.valor + r.id;
}
