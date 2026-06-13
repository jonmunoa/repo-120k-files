// fichero 39949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39949;

Registro39949 crear_registro39949(int id) {
    Registro39949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39949(Registro39949 r) {
    return r.valor + r.id;
}
