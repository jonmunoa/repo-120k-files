// fichero 12861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12861;

Registro12861 crear_registro12861(int id) {
    Registro12861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12861(Registro12861 r) {
    return r.valor + r.id;
}
