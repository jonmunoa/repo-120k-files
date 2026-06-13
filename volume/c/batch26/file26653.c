// fichero 26653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26653;

Registro26653 crear_registro26653(int id) {
    Registro26653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26653(Registro26653 r) {
    return r.valor + r.id;
}
