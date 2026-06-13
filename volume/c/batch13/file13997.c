// fichero 13997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13997;

Registro13997 crear_registro13997(int id) {
    Registro13997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13997(Registro13997 r) {
    return r.valor + r.id;
}
