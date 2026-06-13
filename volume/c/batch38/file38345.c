// fichero 38345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38345;

Registro38345 crear_registro38345(int id) {
    Registro38345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38345(Registro38345 r) {
    return r.valor + r.id;
}
