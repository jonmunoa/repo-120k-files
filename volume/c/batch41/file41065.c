// fichero 41065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41065;

Registro41065 crear_registro41065(int id) {
    Registro41065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41065(Registro41065 r) {
    return r.valor + r.id;
}
