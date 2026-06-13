// fichero 10425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10425;

Registro10425 crear_registro10425(int id) {
    Registro10425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10425(Registro10425 r) {
    return r.valor + r.id;
}
