// fichero 12181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12181;

Registro12181 crear_registro12181(int id) {
    Registro12181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12181(Registro12181 r) {
    return r.valor + r.id;
}
