// fichero 47057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47057;

Registro47057 crear_registro47057(int id) {
    Registro47057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47057(Registro47057 r) {
    return r.valor + r.id;
}
