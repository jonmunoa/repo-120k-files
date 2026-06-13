// fichero 53397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53397;

Registro53397 crear_registro53397(int id) {
    Registro53397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53397(Registro53397 r) {
    return r.valor + r.id;
}
