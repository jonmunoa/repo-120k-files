// fichero 53961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53961;

Registro53961 crear_registro53961(int id) {
    Registro53961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53961(Registro53961 r) {
    return r.valor + r.id;
}
