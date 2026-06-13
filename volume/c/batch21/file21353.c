// fichero 21353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21353;

Registro21353 crear_registro21353(int id) {
    Registro21353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21353(Registro21353 r) {
    return r.valor + r.id;
}
