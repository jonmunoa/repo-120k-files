// fichero 26049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26049;

Registro26049 crear_registro26049(int id) {
    Registro26049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26049(Registro26049 r) {
    return r.valor + r.id;
}
