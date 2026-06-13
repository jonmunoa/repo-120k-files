// fichero 39981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39981;

Registro39981 crear_registro39981(int id) {
    Registro39981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39981(Registro39981 r) {
    return r.valor + r.id;
}
