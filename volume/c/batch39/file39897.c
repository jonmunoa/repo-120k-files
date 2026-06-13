// fichero 39897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39897;

Registro39897 crear_registro39897(int id) {
    Registro39897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39897(Registro39897 r) {
    return r.valor + r.id;
}
