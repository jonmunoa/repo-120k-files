// fichero 30849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30849;

Registro30849 crear_registro30849(int id) {
    Registro30849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30849(Registro30849 r) {
    return r.valor + r.id;
}
