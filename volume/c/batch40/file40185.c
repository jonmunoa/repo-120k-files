// fichero 40185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40185;

Registro40185 crear_registro40185(int id) {
    Registro40185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40185(Registro40185 r) {
    return r.valor + r.id;
}
