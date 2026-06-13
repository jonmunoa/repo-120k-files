// fichero 47345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47345;

Registro47345 crear_registro47345(int id) {
    Registro47345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47345(Registro47345 r) {
    return r.valor + r.id;
}
