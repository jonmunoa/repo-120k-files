// fichero 34049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34049;

Registro34049 crear_registro34049(int id) {
    Registro34049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34049(Registro34049 r) {
    return r.valor + r.id;
}
