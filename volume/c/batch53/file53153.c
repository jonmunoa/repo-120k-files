// fichero 53153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53153;

Registro53153 crear_registro53153(int id) {
    Registro53153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53153(Registro53153 r) {
    return r.valor + r.id;
}
