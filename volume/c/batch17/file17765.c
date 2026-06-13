// fichero 17765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17765;

Registro17765 crear_registro17765(int id) {
    Registro17765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17765(Registro17765 r) {
    return r.valor + r.id;
}
