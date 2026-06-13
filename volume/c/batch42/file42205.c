// fichero 42205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42205;

Registro42205 crear_registro42205(int id) {
    Registro42205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42205(Registro42205 r) {
    return r.valor + r.id;
}
