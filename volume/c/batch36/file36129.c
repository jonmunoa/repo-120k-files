// fichero 36129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36129;

Registro36129 crear_registro36129(int id) {
    Registro36129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36129(Registro36129 r) {
    return r.valor + r.id;
}
