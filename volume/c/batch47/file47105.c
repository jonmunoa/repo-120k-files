// fichero 47105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47105;

Registro47105 crear_registro47105(int id) {
    Registro47105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47105(Registro47105 r) {
    return r.valor + r.id;
}
