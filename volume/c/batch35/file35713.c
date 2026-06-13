// fichero 35713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35713;

Registro35713 crear_registro35713(int id) {
    Registro35713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35713(Registro35713 r) {
    return r.valor + r.id;
}
