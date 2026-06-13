// fichero 52965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52965;

Registro52965 crear_registro52965(int id) {
    Registro52965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52965(Registro52965 r) {
    return r.valor + r.id;
}
