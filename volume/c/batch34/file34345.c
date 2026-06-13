// fichero 34345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34345;

Registro34345 crear_registro34345(int id) {
    Registro34345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34345(Registro34345 r) {
    return r.valor + r.id;
}
