// fichero 3333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3333;

Registro3333 crear_registro3333(int id) {
    Registro3333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3333(Registro3333 r) {
    return r.valor + r.id;
}
