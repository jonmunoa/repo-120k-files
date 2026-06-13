// fichero 23329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23329;

Registro23329 crear_registro23329(int id) {
    Registro23329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23329(Registro23329 r) {
    return r.valor + r.id;
}
