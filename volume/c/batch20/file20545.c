// fichero 20545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20545;

Registro20545 crear_registro20545(int id) {
    Registro20545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20545(Registro20545 r) {
    return r.valor + r.id;
}
