// fichero 36005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36005;

Registro36005 crear_registro36005(int id) {
    Registro36005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36005(Registro36005 r) {
    return r.valor + r.id;
}
