// fichero 15181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15181;

Registro15181 crear_registro15181(int id) {
    Registro15181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15181(Registro15181 r) {
    return r.valor + r.id;
}
