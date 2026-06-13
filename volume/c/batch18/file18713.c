// fichero 18713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18713;

Registro18713 crear_registro18713(int id) {
    Registro18713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18713(Registro18713 r) {
    return r.valor + r.id;
}
