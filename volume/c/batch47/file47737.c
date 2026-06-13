// fichero 47737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47737;

Registro47737 crear_registro47737(int id) {
    Registro47737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47737(Registro47737 r) {
    return r.valor + r.id;
}
