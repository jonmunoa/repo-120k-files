// fichero 40945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40945;

Registro40945 crear_registro40945(int id) {
    Registro40945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40945(Registro40945 r) {
    return r.valor + r.id;
}
