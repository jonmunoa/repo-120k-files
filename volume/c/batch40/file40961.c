// fichero 40961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40961;

Registro40961 crear_registro40961(int id) {
    Registro40961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40961(Registro40961 r) {
    return r.valor + r.id;
}
