// fichero 5601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5601;

Registro5601 crear_registro5601(int id) {
    Registro5601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5601(Registro5601 r) {
    return r.valor + r.id;
}
