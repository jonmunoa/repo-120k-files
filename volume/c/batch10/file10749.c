// fichero 10749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10749;

Registro10749 crear_registro10749(int id) {
    Registro10749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10749(Registro10749 r) {
    return r.valor + r.id;
}
