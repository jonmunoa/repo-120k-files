// fichero 24929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24929;

Registro24929 crear_registro24929(int id) {
    Registro24929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24929(Registro24929 r) {
    return r.valor + r.id;
}
