// fichero 9601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9601;

Registro9601 crear_registro9601(int id) {
    Registro9601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9601(Registro9601 r) {
    return r.valor + r.id;
}
