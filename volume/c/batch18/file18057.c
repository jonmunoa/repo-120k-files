// fichero 18057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18057;

Registro18057 crear_registro18057(int id) {
    Registro18057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18057(Registro18057 r) {
    return r.valor + r.id;
}
