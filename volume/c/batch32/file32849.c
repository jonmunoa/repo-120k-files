// fichero 32849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32849;

Registro32849 crear_registro32849(int id) {
    Registro32849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32849(Registro32849 r) {
    return r.valor + r.id;
}
