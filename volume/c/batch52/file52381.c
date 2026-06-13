// fichero 52381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52381;

Registro52381 crear_registro52381(int id) {
    Registro52381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52381(Registro52381 r) {
    return r.valor + r.id;
}
