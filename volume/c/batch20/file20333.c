// fichero 20333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20333;

Registro20333 crear_registro20333(int id) {
    Registro20333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20333(Registro20333 r) {
    return r.valor + r.id;
}
