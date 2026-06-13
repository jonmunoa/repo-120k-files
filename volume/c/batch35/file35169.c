// fichero 35169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35169;

Registro35169 crear_registro35169(int id) {
    Registro35169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35169(Registro35169 r) {
    return r.valor + r.id;
}
