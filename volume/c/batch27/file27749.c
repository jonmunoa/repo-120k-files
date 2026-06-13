// fichero 27749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27749;

Registro27749 crear_registro27749(int id) {
    Registro27749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27749(Registro27749 r) {
    return r.valor + r.id;
}
