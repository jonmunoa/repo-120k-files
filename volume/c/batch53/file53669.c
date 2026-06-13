// fichero 53669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53669;

Registro53669 crear_registro53669(int id) {
    Registro53669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53669(Registro53669 r) {
    return r.valor + r.id;
}
