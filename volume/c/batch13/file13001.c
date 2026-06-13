// fichero 13001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13001;

Registro13001 crear_registro13001(int id) {
    Registro13001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13001(Registro13001 r) {
    return r.valor + r.id;
}
