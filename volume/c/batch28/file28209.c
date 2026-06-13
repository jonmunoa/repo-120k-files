// fichero 28209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28209;

Registro28209 crear_registro28209(int id) {
    Registro28209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28209(Registro28209 r) {
    return r.valor + r.id;
}
