// fichero 52257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52257;

Registro52257 crear_registro52257(int id) {
    Registro52257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52257(Registro52257 r) {
    return r.valor + r.id;
}
