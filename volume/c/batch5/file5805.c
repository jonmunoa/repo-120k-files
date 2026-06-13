// fichero 5805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5805;

Registro5805 crear_registro5805(int id) {
    Registro5805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5805(Registro5805 r) {
    return r.valor + r.id;
}
