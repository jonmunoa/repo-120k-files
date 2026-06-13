// fichero 36749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36749;

Registro36749 crear_registro36749(int id) {
    Registro36749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36749(Registro36749 r) {
    return r.valor + r.id;
}
