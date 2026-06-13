// fichero 35817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35817;

Registro35817 crear_registro35817(int id) {
    Registro35817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35817(Registro35817 r) {
    return r.valor + r.id;
}
