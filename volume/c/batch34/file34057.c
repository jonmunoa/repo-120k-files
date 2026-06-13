// fichero 34057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34057;

Registro34057 crear_registro34057(int id) {
    Registro34057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34057(Registro34057 r) {
    return r.valor + r.id;
}
