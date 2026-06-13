// fichero 40077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40077;

Registro40077 crear_registro40077(int id) {
    Registro40077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40077(Registro40077 r) {
    return r.valor + r.id;
}
