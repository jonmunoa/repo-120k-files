// fichero 7645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7645;

Registro7645 crear_registro7645(int id) {
    Registro7645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7645(Registro7645 r) {
    return r.valor + r.id;
}
