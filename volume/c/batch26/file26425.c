// fichero 26425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26425;

Registro26425 crear_registro26425(int id) {
    Registro26425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26425(Registro26425 r) {
    return r.valor + r.id;
}
