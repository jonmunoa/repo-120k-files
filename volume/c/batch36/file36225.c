// fichero 36225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36225;

Registro36225 crear_registro36225(int id) {
    Registro36225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36225(Registro36225 r) {
    return r.valor + r.id;
}
