// fichero 26817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26817;

Registro26817 crear_registro26817(int id) {
    Registro26817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26817(Registro26817 r) {
    return r.valor + r.id;
}
