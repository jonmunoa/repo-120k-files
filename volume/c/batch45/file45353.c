// fichero 45353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45353;

Registro45353 crear_registro45353(int id) {
    Registro45353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45353(Registro45353 r) {
    return r.valor + r.id;
}
