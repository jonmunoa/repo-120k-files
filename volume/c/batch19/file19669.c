// fichero 19669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19669;

Registro19669 crear_registro19669(int id) {
    Registro19669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19669(Registro19669 r) {
    return r.valor + r.id;
}
