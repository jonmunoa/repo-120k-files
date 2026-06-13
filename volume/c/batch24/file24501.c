// fichero 24501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24501;

Registro24501 crear_registro24501(int id) {
    Registro24501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24501(Registro24501 r) {
    return r.valor + r.id;
}
