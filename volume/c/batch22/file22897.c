// fichero 22897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22897;

Registro22897 crear_registro22897(int id) {
    Registro22897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22897(Registro22897 r) {
    return r.valor + r.id;
}
