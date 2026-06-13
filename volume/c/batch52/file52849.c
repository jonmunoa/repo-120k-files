// fichero 52849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52849;

Registro52849 crear_registro52849(int id) {
    Registro52849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52849(Registro52849 r) {
    return r.valor + r.id;
}
