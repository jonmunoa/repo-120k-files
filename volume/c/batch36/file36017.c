// fichero 36017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36017;

Registro36017 crear_registro36017(int id) {
    Registro36017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36017(Registro36017 r) {
    return r.valor + r.id;
}
