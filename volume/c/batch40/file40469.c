// fichero 40469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40469;

Registro40469 crear_registro40469(int id) {
    Registro40469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40469(Registro40469 r) {
    return r.valor + r.id;
}
