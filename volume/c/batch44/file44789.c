// fichero 44789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44789;

Registro44789 crear_registro44789(int id) {
    Registro44789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44789(Registro44789 r) {
    return r.valor + r.id;
}
