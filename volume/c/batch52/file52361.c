// fichero 52361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52361;

Registro52361 crear_registro52361(int id) {
    Registro52361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52361(Registro52361 r) {
    return r.valor + r.id;
}
