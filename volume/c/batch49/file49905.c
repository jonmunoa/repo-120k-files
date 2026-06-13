// fichero 49905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49905;

Registro49905 crear_registro49905(int id) {
    Registro49905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49905(Registro49905 r) {
    return r.valor + r.id;
}
