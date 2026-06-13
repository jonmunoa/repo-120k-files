// fichero 36853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36853;

Registro36853 crear_registro36853(int id) {
    Registro36853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36853(Registro36853 r) {
    return r.valor + r.id;
}
