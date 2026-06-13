// fichero 36209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36209;

Registro36209 crear_registro36209(int id) {
    Registro36209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36209(Registro36209 r) {
    return r.valor + r.id;
}
