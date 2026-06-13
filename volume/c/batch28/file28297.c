// fichero 28297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28297;

Registro28297 crear_registro28297(int id) {
    Registro28297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28297(Registro28297 r) {
    return r.valor + r.id;
}
