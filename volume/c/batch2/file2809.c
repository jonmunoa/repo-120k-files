// fichero 2809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2809;

Registro2809 crear_registro2809(int id) {
    Registro2809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2809(Registro2809 r) {
    return r.valor + r.id;
}
