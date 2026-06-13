// fichero 40129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40129;

Registro40129 crear_registro40129(int id) {
    Registro40129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40129(Registro40129 r) {
    return r.valor + r.id;
}
