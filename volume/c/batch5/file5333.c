// fichero 5333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5333;

Registro5333 crear_registro5333(int id) {
    Registro5333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5333(Registro5333 r) {
    return r.valor + r.id;
}
