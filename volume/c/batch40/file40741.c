// fichero 40741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40741;

Registro40741 crear_registro40741(int id) {
    Registro40741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40741(Registro40741 r) {
    return r.valor + r.id;
}
