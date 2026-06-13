// fichero 44241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44241;

Registro44241 crear_registro44241(int id) {
    Registro44241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44241(Registro44241 r) {
    return r.valor + r.id;
}
