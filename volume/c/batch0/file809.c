// fichero 809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro809;

Registro809 crear_registro809(int id) {
    Registro809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro809(Registro809 r) {
    return r.valor + r.id;
}
