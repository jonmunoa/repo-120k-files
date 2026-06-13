// fichero 40461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40461;

Registro40461 crear_registro40461(int id) {
    Registro40461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40461(Registro40461 r) {
    return r.valor + r.id;
}
