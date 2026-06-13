// fichero 26397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26397;

Registro26397 crear_registro26397(int id) {
    Registro26397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26397(Registro26397 r) {
    return r.valor + r.id;
}
