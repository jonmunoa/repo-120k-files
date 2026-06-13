// fichero 3657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3657;

Registro3657 crear_registro3657(int id) {
    Registro3657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3657(Registro3657 r) {
    return r.valor + r.id;
}
