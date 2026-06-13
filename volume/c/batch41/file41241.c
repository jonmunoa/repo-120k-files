// fichero 41241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41241;

Registro41241 crear_registro41241(int id) {
    Registro41241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41241(Registro41241 r) {
    return r.valor + r.id;
}
