// fichero 40005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40005;

Registro40005 crear_registro40005(int id) {
    Registro40005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40005(Registro40005 r) {
    return r.valor + r.id;
}
