// fichero 20241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20241;

Registro20241 crear_registro20241(int id) {
    Registro20241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20241(Registro20241 r) {
    return r.valor + r.id;
}
