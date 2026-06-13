// fichero 23613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23613;

Registro23613 crear_registro23613(int id) {
    Registro23613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23613(Registro23613 r) {
    return r.valor + r.id;
}
