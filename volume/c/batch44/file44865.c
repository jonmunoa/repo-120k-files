// fichero 44865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44865;

Registro44865 crear_registro44865(int id) {
    Registro44865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44865(Registro44865 r) {
    return r.valor + r.id;
}
