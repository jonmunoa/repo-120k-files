// fichero 34753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34753;

Registro34753 crear_registro34753(int id) {
    Registro34753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34753(Registro34753 r) {
    return r.valor + r.id;
}
