// fichero 40269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40269;

Registro40269 crear_registro40269(int id) {
    Registro40269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40269(Registro40269 r) {
    return r.valor + r.id;
}
