// fichero 41817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41817;

Registro41817 crear_registro41817(int id) {
    Registro41817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41817(Registro41817 r) {
    return r.valor + r.id;
}
