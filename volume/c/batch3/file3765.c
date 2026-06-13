// fichero 3765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3765;

Registro3765 crear_registro3765(int id) {
    Registro3765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3765(Registro3765 r) {
    return r.valor + r.id;
}
