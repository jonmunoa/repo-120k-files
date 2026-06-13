// fichero 49853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49853;

Registro49853 crear_registro49853(int id) {
    Registro49853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49853(Registro49853 r) {
    return r.valor + r.id;
}
