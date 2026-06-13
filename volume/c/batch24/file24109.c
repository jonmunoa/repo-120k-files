// fichero 24109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24109;

Registro24109 crear_registro24109(int id) {
    Registro24109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24109(Registro24109 r) {
    return r.valor + r.id;
}
