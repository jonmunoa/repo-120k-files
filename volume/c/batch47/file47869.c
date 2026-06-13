// fichero 47869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47869;

Registro47869 crear_registro47869(int id) {
    Registro47869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47869(Registro47869 r) {
    return r.valor + r.id;
}
