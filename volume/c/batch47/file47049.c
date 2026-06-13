// fichero 47049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47049;

Registro47049 crear_registro47049(int id) {
    Registro47049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47049(Registro47049 r) {
    return r.valor + r.id;
}
