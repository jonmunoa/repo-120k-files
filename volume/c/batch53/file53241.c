// fichero 53241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53241;

Registro53241 crear_registro53241(int id) {
    Registro53241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53241(Registro53241 r) {
    return r.valor + r.id;
}
