// fichero 45445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45445;

Registro45445 crear_registro45445(int id) {
    Registro45445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45445(Registro45445 r) {
    return r.valor + r.id;
}
