// fichero 53109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53109;

Registro53109 crear_registro53109(int id) {
    Registro53109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53109(Registro53109 r) {
    return r.valor + r.id;
}
