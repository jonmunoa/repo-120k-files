// fichero 52837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52837;

Registro52837 crear_registro52837(int id) {
    Registro52837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52837(Registro52837 r) {
    return r.valor + r.id;
}
