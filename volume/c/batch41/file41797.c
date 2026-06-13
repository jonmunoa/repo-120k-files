// fichero 41797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41797;

Registro41797 crear_registro41797(int id) {
    Registro41797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41797(Registro41797 r) {
    return r.valor + r.id;
}
