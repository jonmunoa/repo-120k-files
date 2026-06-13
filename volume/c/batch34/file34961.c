// fichero 34961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34961;

Registro34961 crear_registro34961(int id) {
    Registro34961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34961(Registro34961 r) {
    return r.valor + r.id;
}
