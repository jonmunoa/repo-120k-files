// fichero 3869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3869;

Registro3869 crear_registro3869(int id) {
    Registro3869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3869(Registro3869 r) {
    return r.valor + r.id;
}
