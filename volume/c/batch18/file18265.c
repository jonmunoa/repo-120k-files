// fichero 18265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18265;

Registro18265 crear_registro18265(int id) {
    Registro18265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18265(Registro18265 r) {
    return r.valor + r.id;
}
