// fichero 12129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12129;

Registro12129 crear_registro12129(int id) {
    Registro12129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12129(Registro12129 r) {
    return r.valor + r.id;
}
