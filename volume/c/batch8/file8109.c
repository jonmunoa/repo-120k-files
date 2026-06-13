// fichero 8109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8109;

Registro8109 crear_registro8109(int id) {
    Registro8109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8109(Registro8109 r) {
    return r.valor + r.id;
}
