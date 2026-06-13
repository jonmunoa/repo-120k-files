// fichero 33353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33353;

Registro33353 crear_registro33353(int id) {
    Registro33353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33353(Registro33353 r) {
    return r.valor + r.id;
}
