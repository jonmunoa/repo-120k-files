// fichero 52929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52929;

Registro52929 crear_registro52929(int id) {
    Registro52929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52929(Registro52929 r) {
    return r.valor + r.id;
}
