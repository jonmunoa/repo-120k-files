// fichero 3929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3929;

Registro3929 crear_registro3929(int id) {
    Registro3929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3929(Registro3929 r) {
    return r.valor + r.id;
}
