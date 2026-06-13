// fichero 36313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36313;

Registro36313 crear_registro36313(int id) {
    Registro36313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36313(Registro36313 r) {
    return r.valor + r.id;
}
