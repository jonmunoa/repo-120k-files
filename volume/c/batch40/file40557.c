// fichero 40557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40557;

Registro40557 crear_registro40557(int id) {
    Registro40557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40557(Registro40557 r) {
    return r.valor + r.id;
}
