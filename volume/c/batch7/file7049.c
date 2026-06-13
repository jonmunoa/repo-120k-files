// fichero 7049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7049;

Registro7049 crear_registro7049(int id) {
    Registro7049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7049(Registro7049 r) {
    return r.valor + r.id;
}
