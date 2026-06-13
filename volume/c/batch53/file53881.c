// fichero 53881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53881;

Registro53881 crear_registro53881(int id) {
    Registro53881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53881(Registro53881 r) {
    return r.valor + r.id;
}
