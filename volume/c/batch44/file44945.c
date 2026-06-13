// fichero 44945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44945;

Registro44945 crear_registro44945(int id) {
    Registro44945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44945(Registro44945 r) {
    return r.valor + r.id;
}
