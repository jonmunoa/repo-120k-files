// fichero 40117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40117;

Registro40117 crear_registro40117(int id) {
    Registro40117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40117(Registro40117 r) {
    return r.valor + r.id;
}
