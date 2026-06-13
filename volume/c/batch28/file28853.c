// fichero 28853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28853;

Registro28853 crear_registro28853(int id) {
    Registro28853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28853(Registro28853 r) {
    return r.valor + r.id;
}
