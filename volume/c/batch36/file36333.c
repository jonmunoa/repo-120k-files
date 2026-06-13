// fichero 36333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36333;

Registro36333 crear_registro36333(int id) {
    Registro36333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36333(Registro36333 r) {
    return r.valor + r.id;
}
