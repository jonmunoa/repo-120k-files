// fichero 35461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35461;

Registro35461 crear_registro35461(int id) {
    Registro35461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35461(Registro35461 r) {
    return r.valor + r.id;
}
