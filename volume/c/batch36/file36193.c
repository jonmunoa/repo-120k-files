// fichero 36193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36193;

Registro36193 crear_registro36193(int id) {
    Registro36193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36193(Registro36193 r) {
    return r.valor + r.id;
}
