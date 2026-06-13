// fichero 5241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5241;

Registro5241 crear_registro5241(int id) {
    Registro5241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5241(Registro5241 r) {
    return r.valor + r.id;
}
