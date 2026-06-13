// fichero 40609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40609;

Registro40609 crear_registro40609(int id) {
    Registro40609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40609(Registro40609 r) {
    return r.valor + r.id;
}
