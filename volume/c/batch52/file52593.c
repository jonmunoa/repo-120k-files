// fichero 52593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52593;

Registro52593 crear_registro52593(int id) {
    Registro52593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52593(Registro52593 r) {
    return r.valor + r.id;
}
