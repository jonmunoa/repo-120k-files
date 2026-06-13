// fichero 24721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24721;

Registro24721 crear_registro24721(int id) {
    Registro24721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24721(Registro24721 r) {
    return r.valor + r.id;
}
