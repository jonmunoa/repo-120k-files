// fichero 85 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro85;

Registro85 crear_registro85(int id) {
    Registro85 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro85(Registro85 r) {
    return r.valor + r.id;
}
