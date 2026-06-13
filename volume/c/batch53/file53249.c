// fichero 53249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53249;

Registro53249 crear_registro53249(int id) {
    Registro53249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53249(Registro53249 r) {
    return r.valor + r.id;
}
