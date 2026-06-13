// fichero 29109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29109;

Registro29109 crear_registro29109(int id) {
    Registro29109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29109(Registro29109 r) {
    return r.valor + r.id;
}
