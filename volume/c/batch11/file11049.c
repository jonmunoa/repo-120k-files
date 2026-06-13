// fichero 11049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11049;

Registro11049 crear_registro11049(int id) {
    Registro11049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11049(Registro11049 r) {
    return r.valor + r.id;
}
