// fichero 40941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40941;

Registro40941 crear_registro40941(int id) {
    Registro40941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40941(Registro40941 r) {
    return r.valor + r.id;
}
