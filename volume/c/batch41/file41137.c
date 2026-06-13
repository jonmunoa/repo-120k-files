// fichero 41137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41137;

Registro41137 crear_registro41137(int id) {
    Registro41137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41137(Registro41137 r) {
    return r.valor + r.id;
}
