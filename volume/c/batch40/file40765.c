// fichero 40765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40765;

Registro40765 crear_registro40765(int id) {
    Registro40765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40765(Registro40765 r) {
    return r.valor + r.id;
}
