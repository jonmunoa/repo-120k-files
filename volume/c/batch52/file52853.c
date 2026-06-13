// fichero 52853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52853;

Registro52853 crear_registro52853(int id) {
    Registro52853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52853(Registro52853 r) {
    return r.valor + r.id;
}
