// fichero 26057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26057;

Registro26057 crear_registro26057(int id) {
    Registro26057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26057(Registro26057 r) {
    return r.valor + r.id;
}
