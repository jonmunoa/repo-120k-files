// fichero 47953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47953;

Registro47953 crear_registro47953(int id) {
    Registro47953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47953(Registro47953 r) {
    return r.valor + r.id;
}
