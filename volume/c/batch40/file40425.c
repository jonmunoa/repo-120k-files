// fichero 40425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40425;

Registro40425 crear_registro40425(int id) {
    Registro40425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40425(Registro40425 r) {
    return r.valor + r.id;
}
