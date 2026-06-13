// fichero 19085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19085;

Registro19085 crear_registro19085(int id) {
    Registro19085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19085(Registro19085 r) {
    return r.valor + r.id;
}
