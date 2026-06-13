// fichero 27561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27561;

Registro27561 crear_registro27561(int id) {
    Registro27561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27561(Registro27561 r) {
    return r.valor + r.id;
}
