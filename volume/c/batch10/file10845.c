// fichero 10845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10845;

Registro10845 crear_registro10845(int id) {
    Registro10845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10845(Registro10845 r) {
    return r.valor + r.id;
}
