// fichero 35101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35101;

Registro35101 crear_registro35101(int id) {
    Registro35101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35101(Registro35101 r) {
    return r.valor + r.id;
}
