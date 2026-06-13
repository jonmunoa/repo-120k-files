// fichero 34421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34421;

Registro34421 crear_registro34421(int id) {
    Registro34421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34421(Registro34421 r) {
    return r.valor + r.id;
}
