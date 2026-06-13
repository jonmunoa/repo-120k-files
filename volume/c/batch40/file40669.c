// fichero 40669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40669;

Registro40669 crear_registro40669(int id) {
    Registro40669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40669(Registro40669 r) {
    return r.valor + r.id;
}
