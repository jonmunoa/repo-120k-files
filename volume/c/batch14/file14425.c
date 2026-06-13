// fichero 14425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14425;

Registro14425 crear_registro14425(int id) {
    Registro14425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14425(Registro14425 r) {
    return r.valor + r.id;
}
