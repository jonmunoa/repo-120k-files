// fichero 489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro489;

Registro489 crear_registro489(int id) {
    Registro489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro489(Registro489 r) {
    return r.valor + r.id;
}
