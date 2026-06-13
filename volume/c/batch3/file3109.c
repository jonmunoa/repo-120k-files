// fichero 3109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3109;

Registro3109 crear_registro3109(int id) {
    Registro3109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3109(Registro3109 r) {
    return r.valor + r.id;
}
