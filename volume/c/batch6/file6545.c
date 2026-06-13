// fichero 6545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6545;

Registro6545 crear_registro6545(int id) {
    Registro6545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6545(Registro6545 r) {
    return r.valor + r.id;
}
