// fichero 53341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53341;

Registro53341 crear_registro53341(int id) {
    Registro53341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53341(Registro53341 r) {
    return r.valor + r.id;
}
