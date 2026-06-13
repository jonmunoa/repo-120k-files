// fichero 40489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40489;

Registro40489 crear_registro40489(int id) {
    Registro40489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40489(Registro40489 r) {
    return r.valor + r.id;
}
