// fichero 3821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3821;

Registro3821 crear_registro3821(int id) {
    Registro3821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3821(Registro3821 r) {
    return r.valor + r.id;
}
