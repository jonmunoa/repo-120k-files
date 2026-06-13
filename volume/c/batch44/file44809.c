// fichero 44809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44809;

Registro44809 crear_registro44809(int id) {
    Registro44809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44809(Registro44809 r) {
    return r.valor + r.id;
}
