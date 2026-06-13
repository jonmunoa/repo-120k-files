// fichero 43333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43333;

Registro43333 crear_registro43333(int id) {
    Registro43333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43333(Registro43333 r) {
    return r.valor + r.id;
}
