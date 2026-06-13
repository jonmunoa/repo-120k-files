// fichero 53861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53861;

Registro53861 crear_registro53861(int id) {
    Registro53861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53861(Registro53861 r) {
    return r.valor + r.id;
}
