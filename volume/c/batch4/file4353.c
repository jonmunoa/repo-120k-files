// fichero 4353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4353;

Registro4353 crear_registro4353(int id) {
    Registro4353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4353(Registro4353 r) {
    return r.valor + r.id;
}
