// fichero 44425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44425;

Registro44425 crear_registro44425(int id) {
    Registro44425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44425(Registro44425 r) {
    return r.valor + r.id;
}
