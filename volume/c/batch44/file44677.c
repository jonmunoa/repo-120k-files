// fichero 44677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44677;

Registro44677 crear_registro44677(int id) {
    Registro44677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44677(Registro44677 r) {
    return r.valor + r.id;
}
