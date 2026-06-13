// fichero 31817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31817;

Registro31817 crear_registro31817(int id) {
    Registro31817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31817(Registro31817 r) {
    return r.valor + r.id;
}
