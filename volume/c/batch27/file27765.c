// fichero 27765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27765;

Registro27765 crear_registro27765(int id) {
    Registro27765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27765(Registro27765 r) {
    return r.valor + r.id;
}
