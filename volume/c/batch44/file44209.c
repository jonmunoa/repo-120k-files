// fichero 44209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44209;

Registro44209 crear_registro44209(int id) {
    Registro44209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44209(Registro44209 r) {
    return r.valor + r.id;
}
