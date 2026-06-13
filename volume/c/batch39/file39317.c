// fichero 39317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39317;

Registro39317 crear_registro39317(int id) {
    Registro39317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39317(Registro39317 r) {
    return r.valor + r.id;
}
