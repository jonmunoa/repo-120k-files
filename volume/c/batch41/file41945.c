// fichero 41945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41945;

Registro41945 crear_registro41945(int id) {
    Registro41945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41945(Registro41945 r) {
    return r.valor + r.id;
}
