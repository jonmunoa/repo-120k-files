// fichero 50765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50765;

Registro50765 crear_registro50765(int id) {
    Registro50765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50765(Registro50765 r) {
    return r.valor + r.id;
}
