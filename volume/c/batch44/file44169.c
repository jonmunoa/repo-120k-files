// fichero 44169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44169;

Registro44169 crear_registro44169(int id) {
    Registro44169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44169(Registro44169 r) {
    return r.valor + r.id;
}
