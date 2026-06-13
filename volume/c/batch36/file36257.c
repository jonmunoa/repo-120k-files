// fichero 36257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36257;

Registro36257 crear_registro36257(int id) {
    Registro36257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36257(Registro36257 r) {
    return r.valor + r.id;
}
