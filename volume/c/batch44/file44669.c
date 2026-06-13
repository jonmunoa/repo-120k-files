// fichero 44669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44669;

Registro44669 crear_registro44669(int id) {
    Registro44669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44669(Registro44669 r) {
    return r.valor + r.id;
}
