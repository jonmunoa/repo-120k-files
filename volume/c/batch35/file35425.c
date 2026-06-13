// fichero 35425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35425;

Registro35425 crear_registro35425(int id) {
    Registro35425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35425(Registro35425 r) {
    return r.valor + r.id;
}
