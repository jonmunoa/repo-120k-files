// fichero 41625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41625;

Registro41625 crear_registro41625(int id) {
    Registro41625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41625(Registro41625 r) {
    return r.valor + r.id;
}
