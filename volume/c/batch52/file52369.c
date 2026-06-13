// fichero 52369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52369;

Registro52369 crear_registro52369(int id) {
    Registro52369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52369(Registro52369 r) {
    return r.valor + r.id;
}
