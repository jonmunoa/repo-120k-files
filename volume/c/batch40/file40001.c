// fichero 40001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40001;

Registro40001 crear_registro40001(int id) {
    Registro40001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40001(Registro40001 r) {
    return r.valor + r.id;
}
