// fichero 40265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40265;

Registro40265 crear_registro40265(int id) {
    Registro40265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40265(Registro40265 r) {
    return r.valor + r.id;
}
