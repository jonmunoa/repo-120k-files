// fichero 52025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52025;

Registro52025 crear_registro52025(int id) {
    Registro52025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52025(Registro52025 r) {
    return r.valor + r.id;
}
