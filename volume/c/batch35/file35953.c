// fichero 35953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35953;

Registro35953 crear_registro35953(int id) {
    Registro35953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35953(Registro35953 r) {
    return r.valor + r.id;
}
