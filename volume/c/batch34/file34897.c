// fichero 34897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34897;

Registro34897 crear_registro34897(int id) {
    Registro34897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34897(Registro34897 r) {
    return r.valor + r.id;
}
