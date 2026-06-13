// fichero 53113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53113;

Registro53113 crear_registro53113(int id) {
    Registro53113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53113(Registro53113 r) {
    return r.valor + r.id;
}
